#pragma once
#include "Land.h"
namespace mfw{

    Land::Land(std::string name, std::vector <int> tolls, int house_building_cost, int hotel_buliding_cost, int mortgage)
        if(name.size()<6){
            throw std::invalid_argument("size of name of land is too short!");
        }
        if(tolls.size()!=6){
            throw std::invalid_argument("number of tolls is not equal oto 6!");
        }
        if(house_buliding_cost<0||hotel_buliding_cost<0||mortgage<0){
            throw std::invalid_argument("invalid number of cost or mortgage");
        }
        _name=name;
        _tolls=tolls;
        _house_building_cost=house_building_cost;
        _hotel_buliding_cost=hotel_buliding_cost;
        _mortgage=mortgage;

    }
    std::string Land::show_detail(){
        char[100] buf;
        std::string t;
        sprintf(buf,"%s %d,%d,%d,%d,%d,%d house_cost:%d hotel_cost:%d mortgage:%d",_name,_tolls.at(0),_tolls.at(1),_tolls.at(2),_tolls.at(3),_tolls.at(4),_tolls.at(5),_house_building_cost,_hotel_buliding_cost,_mortgage);
        t+=buf;
        return t;
    }
}
