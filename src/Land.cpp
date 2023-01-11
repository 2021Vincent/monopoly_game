#include "Land.h"
// #include "Block.h"
#include <vector>
#include <string>

Land::Land(int id,std::string name, std::vector <int> tolls, int house_building_cost, int hotel_building_cost, int mortgage){
    if(name.size()<7){
        throw std::invalid_argument("size of name of land is too short!");
    }
    if(tolls.size()!=6){
        throw std::invalid_argument("number of tolls is not equal to 6!");
    }
    if(house_building_cost<0||hotel_building_cost<0||mortgage<0||id<0){
        throw std::invalid_argument("invalid number of cost or mortgage");
    }
    _id=id;
    _name=name;
    _tolls=tolls;
    _house_building_cost=house_building_cost;
    _hotel_building_cost=hotel_building_cost;
    _mortgage=mortgage;
    _landlord="Bank";
}

int Land::getID(){
    return _id;
}
std::string Land::getName(){
    return _name;
}
int Land::operator[](int n){
    return _tolls.at(n);
}
int Land::getHouseBuildingCost(){
    return _house_building_cost;
}
int Land::getHotelBuildingCost(){
    return _hotel_building_cost;
}
int Land::getMortgage(){
    return _mortgage;
}
