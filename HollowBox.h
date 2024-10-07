#pragma once
#include <iostream>
#include "Box.h"

class HollowBox : public Box {
public:
    HollowBox(int h, int w, char c);
    std::string asString () const;

private:
    char border;

};
