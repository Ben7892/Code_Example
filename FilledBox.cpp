#include "FilledBox.h"
#include <iostream>

FilledBox::FilledBox(int w, int h, char c) : Box(w, h){

    this->fillChar = c;
}

std::string FilledBox::asString() const{

    std::string filledBoxString;
    int h{0};
    int w{0};

    while(h < this->height){
        filledBoxString += "\n";
        while(w < this->width){
            filledBoxString += this->fillChar;
            w += 1;
        }
        h += 1;
        w = 0;
    }

    return filledBoxString;
}