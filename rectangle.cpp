#include <string>
#include <cstdlib>
#include <iostream>

#include "rectangle.h"

using namespace std;

Rectangle::Rectangle() : Shape("Rectangle"), width(0), height(0){

}

Rectangle::Rectangle(int newWidth, int newHeight) : Shape("Rectangle"){
    this->height = newHeight;
    this->width = newWidth; 
}
int Rectangle::getHeight(){
    return height;
}
int Rectangle::getWidth(){
    return width;
}
double Rectangle::getArea(){
    return (double)width * (double)height;
}

