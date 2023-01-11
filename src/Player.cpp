#include "Player.h"
Player::Player(std::string name,int money){
    if(money<0){
        throw std::invalid_argument("money invalid");
    }
    if(name.size()<1){
        throw std::invalid_argument("name invalid");
    }
    _name=name;
    _money=money;
};
void Player::addMoney(int n){
    _money+=n;
}
void Player::subMoney(int n){
    _money-=n;
}
std::string Player::getName(){
    return _name;
}
int Player::getMoney(){
    return _money;
}
