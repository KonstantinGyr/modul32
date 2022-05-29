#include <iostream>
#include <string>
#include <fstream>
#include "nlohmann/json.hpp"

int main() {
    std::ofstream file{"Presence.json"};
    nlohmann::json album={
            {"band","Led Zeppelin"},
            {"studio","Swan Song Records"},
            {"released year",1976},
            {"producer","Jimmy Page"},
            {"musicians",{
                {"vocal","Robert Plant"},
                {"guitar","Jimmy Page"},
                {"bass guitar","John Poul Jones"},
                {"drums","John Bonham"}}
            },
            {"songs",{
                    {"1.Achilles Last Stand","10:26"},
                    {"2.For Your Life","6:21"},
                    {"3.Royal Orleans","2:58" },
                    {"4.Nobody's Fault but Mine","6:27"},
                    {"5.Candy Store Rock","4:10"},
                    {"6.Hots On for Nowhere","4:42"},
                    {"7.Tea for One","9:27"}}
            }
    };
   // file<<album;
    return 0;
}
