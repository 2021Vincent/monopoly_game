cc = g++
cflags = -lgtest -lpthread -std=c++11 -Wfatal-errors
source = $(shell find ./src/ -type f \( -iname "*.cpp" ! -iname "HelloWorld*" \))

out = bin/ut_all
outgcovr = bin/ut_all_gcovr

.PHONY: directories clean stat all gcovr

all: ut_all

ut_all: test/ut_main.cpp
	mkdir -p bin
	$(cc) $(source) test/ut_main.cpp -o $(out) $(cflags)
	./$(out)
gcovr: test/ut_main.cpp
	mkdir -p bin
	$(cc) $(source) test/ut_main.cpp -o $(outgcovr) $(cflags) --coverage -fkeep-inline-functions -fno-inline -fno-inline-small-functions -fno-default-inline -g -O0
	# $(cc) $(source) test/ut_main.cpp -o $(out) $(cflags)
	./bin/ut_all_gcovr
	valgrind ./$(outgcovr)
	python3 -m gcovr --exclude test
directories:
	mkdir -p bin
push:
	git add .
	git commit -m $(m)
	git push
clean:
	rm -rf bin/*
	rm -f *.gcda
	rm -f *.gcno
stat:
	wc src/* test/*
