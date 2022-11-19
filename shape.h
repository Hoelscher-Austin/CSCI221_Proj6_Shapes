#ifndef _SHAPE_

#define _SHAPE_

#include <string>
#include <cstdlib>
#include <iostream>

using namespace std;



class Shape{
    public:
        Shape();
        Shape(string name);
        string getName();
        void setName(string newName);
        virtual double getArea() = 0;
    private:
        string name;

};
#endif