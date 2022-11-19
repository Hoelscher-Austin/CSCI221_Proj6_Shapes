#include <string>
#include <cstdlib>
#include <iostream>

#include "circle.h"

using namespace std;

Circle::Circle() : Shape("Circle"), radius(0){

}
Circle::Circle(int theRadius) : Shape("Circle"), radius(theRadius){

}
void Circle::setRadius(int newRadius){
    this->radius = newRadius;
}
double Circle::getRadius(){
    return radius;
}
double Circle::getArea(){
    return 3.14159 * radius * radius;
}


//////////////////////////////////////////////////////////
/*
Rectangle::Rectangle():Shape("Rectangle"), width(0), height(0){

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
    return width * height;
}
*/