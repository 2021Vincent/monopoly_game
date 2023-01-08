#pragma once
#include <iostream>
#include <vector>
#include <string>
namespace mfw{
    class Land{
    private:
        std::string _name;
        std::vector <int> _tolls;
        int _house_building_cost;
        int _hotel_buliding_cost;
        int _mortgage;
    public:
        Land(std::string name, std::vector <int> tolls, int house_building_cost, int hotel_buliding_cost, int mortgage);
        ~Land()=default;
        std::string show_detail()
    };

}
