#include <string>
#include <cstdlib>
#include <iostream>

#include "shape.h"

using namespace std;

class Circle: public Shape{
    public:
        Circle();
        Circle(int theRadius);
        void setRadius(int newRadius);
        double getRadius();
        virtual double getArea();
    private:
        int radius;

};
/*
class Rectangle : public Shape{
    private:
        int width;
        int height;
    public:
        Rectangle();
        Rectangle(int newWidth, int newHeight);
        int getWidth();
        int getHeight();
        virtual double getArea();
        

};*/