#pragma once
#include <iostream>
#include <vector>
#include <string>
// #include "Block.h"
class Land{

private:
    int _id;
    std::string _name;
    std::vector <int> _tolls;
    int _house_building_cost;
    int _hotel_building_cost;
    int _mortgage;
    std::string _landlord;
public:
    Land(int id,std::string name, std::vector <int> tolls, int house_building_cost, int hotel_building_cost, int mortgage);
    ~Land(){};
    int getID();
    std::string getName();
    int operator[](int n);
    int getHouseBuildingCost();
    int getHotelBuildingCost();
    int getMortgage();
};
