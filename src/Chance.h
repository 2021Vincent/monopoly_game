#pragma once

class Chance:public Block{
private:
    std::string _message;
public:
    Chance(int id,std::string message):Block(id){
        _message=message;
    };
    // std::string getMessage(){
    //     return _message;
    // }
};
