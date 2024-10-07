#include "FancyBox.h"
#include <iostream>

FancyBox::FancyBox(int w, int h, char c) : Box(w, h) {

    this->fillChar = c;
}

std::string FancyBox::asString() const{

    std::string fancyBoxString;
    int h{0};
    int w{0};
    while(h < this->height){
        fancyBoxString += "\n";
        while(w < this->width){

            if(h == 0 && w != 0 && w != this->width-1 || h == this->height-1 && w != 0 && w != this->width-1){
            fancyBoxString += "─";

            }else if(h == 0 && w == 0){
                fancyBoxString += "┌";

            }else if(h == 0 && w == this->width-1){
                fancyBoxString += "┐";

            }else if(h == this->height-1 && w == 0){
                fancyBoxString += "└";

            }else if(h == this->height-1 && w == this->width-1){
                fancyBoxString += "┘";

            }else if( w == 0 || w == this->width-1){
                fancyBoxString += "│";
                
            }else{
                fancyBoxString += fillChar;

            }
            w += 1;
        }
        w = 0;
        h += 1;
    }
    return fancyBoxString;
}
