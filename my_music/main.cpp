#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include "nlohmann/json.hpp"

struct Album{
    std::string band;
    std::string studios;
    int released_years;
    std::string producer;
    std::map<std::string,std::string> musicians;
};
struct MyMusic {
    std::string name;
    Album album;
};

int main() {
    MyMusic music;
    std::vector<MyMusic>vecMus;
    std::ifstream file("collection.json");
    nlohmann::json collection;
    file>>collection;
    std::map<std::string,nlohmann::json>mapMus=collection;
    for(auto &item:mapMus){
        music.name=item.first;
        music.album.band=item.second["band"];
        music.album.studios=item.second["studios"];
        music.album.released_years=item.second["released years"];
        music.album.producer=item.second["producer"];
        music.album.musicians=item.second["musicians"];
        vecMus.push_back(music);
    }
    //search musician;
    for(auto & item:vecMus){
        for(auto & men:item.album.musicians){
            std::pair<std::string,std::string> oPair;
            oPair=men;
            if(oPair.second=="Jimmy Page"){
                std::cout<<"Jimmy Page : "<<oPair.first<<". band: "<<item.album.band<<std::endl;
                std::cout<<"Album : "<<item.name<<std::endl;
            }
        }
    }
    return 0;
}
