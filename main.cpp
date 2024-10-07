#include "Box.h"
#include "HollowBox.h"
#include "FilledBox.h"
#include "FancyBox.h"
#include <iostream>

using std::cout;
using std::cin;
using std::string;
using std::cerr;
using std::endl;
using std::stoi;

int main(int argc, char** argv){

    int w;
    int h;
    char c;
    string boxType;

    if(argc == 5){
        w = stoi(argv[1]);
        h = stoi(argv[2]);
        c = argv[3][0];
        boxType = argv[4];
    }else{
        cout << "Please enter width, height, fill character and box type(in order): ";
        cin >> w >> h >> c >> boxType; 
    }
    
    
    if(w < 0 || w != (int)w){
        cerr << "Invalid width input, intput a positive integer" << endl;
        return 2;
    }
    if(h < 0 || h != (int)h){
        cerr << "Invalid height input, input a positive integer" << endl;
        return 3;
    }
    

    if(boxType == "Filled" || boxType == "filled" || boxType == "f" || boxType == "F"){
        FilledBox fBox(w, h, c);
        cout << fBox.asString() << endl;

    }else if(boxType == "Hollow" || boxType == "hollow" || boxType == "h" || boxType == "H"){
        HollowBox box(w, h, c);
        cout << box.asString() << endl;

    }else if(boxType == "Fancy" || boxType == "fancy" || boxType == "fa" || boxType == "FA"){
        FancyBox faBox(w, h, c);
            cout << faBox.asString();

    }else if(boxType == "All" || boxType == "all" || boxType == "a" || boxType == "A"){
        FilledBox fBox(w, h, c);
        HollowBox box(w, h, c);
        FancyBox faBox(w, h, c);    
        cout << fBox.asString() << endl << box.asString() << endl << faBox.asString() << endl;

    }else{
        cerr << "Invalid input, Usage: ./hw width height char boxType" << endl;
        return 1;
    }
    
    return 0;
}