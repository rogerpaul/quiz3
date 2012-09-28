


#include "shapes.h"
#include <ostream>


    circle::circle():
    radius{0.0f} {}
    
    
    void circle::draw(){
        std:cout << "drew a circle" ;
    }
    
    float circle::area(){
    
        return 3.14159265f*radius*radius;
    }
    
    


    Square::Square():
    sides{0.0f} {}
    
    
    void Square::draw(){
           std:cout << "drew a square" ;
    }
    
    float Square::area(){
        
        return side*side;
        
    }
    
    
   