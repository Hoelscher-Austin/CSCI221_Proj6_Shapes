#include <string>
#include <cstdlib>
#include <iostream>

#include "shape.h"

using namespace std;

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
        

};