#pragma once
#include <iostream>
#include "Box.h"

class FilledBox : public Box{

public:
    FilledBox(int width, int height, char fChar);
    std::string asString() const;

private:
    char fillChar;

};
