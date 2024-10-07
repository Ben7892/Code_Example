#include "HollowBox.h"
#include <iostream>

HollowBox::HollowBox(int h, int w, char c) : Box(h, w){

    this->border = c;

}

std::string HollowBox::asString() const{
    
    std::string hollowBoxString;
    int h{0};
    int w{0};
    while(h < this->height){
        hollowBoxString += "\n";
        while(w < this->width){
            if(h == 0 || h == this->height-1 || w == 0 || w == this->width-1){
            hollowBoxString += this->border;
            } else{
                hollowBoxString += " ";
            }
            w += 1;
        }
        w = 0;
        h += 1;
    }
    return hollowBoxString;
}
