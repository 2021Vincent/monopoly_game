#pragma once
#include <iostream>
#include <string>
#include <vector>

class Player{
private:
    std::string _name;
    int _money;
    std::vector <int> _landID;
public:
    Player(std::string name,int money);
    ~Player()=default;
    std::string getName();
    int getMoney();
    void addMoney(int n);
    void subMoney(int n);
};
