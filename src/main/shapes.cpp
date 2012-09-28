

#include "shape.h"
#include "shapes.h"
#include <iostream>


    Circle::Circle(float r):
    radius(r) {}
    
    
    void Circle::draw(){
        std::cout << "drew a circle" ;
    }
    
    float Circle::area(){
    
        return 3.14159265f*radius*radius;
    }
    
    


    Square::Square(float s):
    side(s) {}
    
    
    void Square::draw(){
           std::cout << "drew a square" ;
    }
    
    float Square::area(){
        float area = side*side;
        return area;
        
    }
    
    
   