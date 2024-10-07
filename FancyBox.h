#pragma once

#include <iostream>
#include "Box.h"

class FancyBox : public Box{

public:
    FancyBox(int width, int height, char fillChar);
    std::string asString() const;

private:
    char fillChar;

};
