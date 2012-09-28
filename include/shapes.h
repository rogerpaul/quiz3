#ifndef SHAPES_H
#define SHAPES_H


#include "shape.h"


class Circle: public Shape{
    private:
        float radius;
        
            
   
   public:
    Circle(float r);
    
    void draw();
    
    float area();
    
    
    
    
};

class Square: public Shape{
private:
float side;


public:
    Square(float s);
    
    void draw();
    
    float area();
    
    
    
};


#endif