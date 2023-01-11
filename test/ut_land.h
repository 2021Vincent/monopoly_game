#include <gtest/gtest.h>
#include <vector>
#include "../src/Land.h"

TEST(Block,constructor){
    Land *a=new Land(1,"台北市",{10,100,200,400,600,1000},1000,1000,700);
    ASSERT_EQ(a->getID(),1);
    ASSERT_EQ(a->getName(),"台北市");
    ASSERT_EQ((*(a))[0],10);
    ASSERT_EQ((*(a))[1],100);
    ASSERT_EQ((*(a))[2],200);
    ASSERT_EQ((*(a))[3],400);
    ASSERT_EQ((*(a))[4],600);
    ASSERT_EQ((*(a))[5],1000);
    ASSERT_EQ(a->getHouseBuildingCost(),1000);
    ASSERT_EQ(a->getHotelBuildingCost(),1000);
    ASSERT_EQ(a->getMortgage(),700);
    delete a;
}
TEST(Block,name_exception){
    ASSERT_THROW(Land(1,"台北",{10,100,200,400,600,1000},1000,1000,700),std::invalid_argument);
}
TEST(Block,tolls_exception){
    ASSERT_THROW(Land(1,"台北市",{10,100,200,400,1000},1000,1000,700),std::invalid_argument);
}
TEST(Block,house_exception){
    ASSERT_THROW(Land(1,"台北市",{10,100,200,400,600,1000},-1,1000,700),std::invalid_argument);
}
TEST(Block,hotel_exception){
    ASSERT_THROW(Land(1,"台北市",{10,100,200,400,600,1000},1000,-1,700),std::invalid_argument);
}
TEST(Block,mortgage_exception){
    ASSERT_THROW(Land(1,"台北市",{10,100,200,400,600,1000},1000,1000,-1),std::invalid_argument);
}
