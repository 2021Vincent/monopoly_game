#pragma once
#include <iostream>
#include <string>
#include <vector>
namespace mfw{
    class Player{
    private:
        std::string _name;
        int _money;
        std::vector <Land*> _lands;
    public:
        Player(std::string name,int money){
            if(money<0){
                throw std::invalid_argument("money invalid");
            }
            _name=name;
            _money=money;
        };
        ~Player()=default;

    };

}
