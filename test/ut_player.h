#include <gtest/gtest.h>
#include "../src/Player.h"
// using namespace mfw;
TEST(Player,constructor){
    Player a1("hank",30000);
    ASSERT_EQ(a1.getName(),"hank");
    ASSERT_EQ(a1.getMoney(),30000);
    a1.addMoney(2000);
    ASSERT_EQ(a1.getMoney(),32000);
    a1.subMoney(800);
    ASSERT_EQ(a1.getMoney(),31200);
}
TEST(Player,money_exception){
    ASSERT_THROW(Player("asdsd",-1),std::invalid_argument);
}
TEST(Player,name_exception){
    ASSERT_THROW(Player("",10000),std::invalid_argument);
}
