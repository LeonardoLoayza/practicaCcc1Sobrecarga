#include <iostream> 
#include "Point.h"

class PointArray
{
public:
    friend std::ostream& operator<<(
            std::ostream&, PointArray
        );
    
    // = , == , != , [] lectura y escritura 
    void operator=(PointArray & arr)
    {   

        for(int i = 0; i<arr.size; i++)
        {
            
        }
    }
    bool operator==(Point &arr)
    {   
        
    }
    bool operator!=(Point &arr)
    {

    }
    void operator[](Point &arr) 
    {}
private: 
    Point * ptr;
    int size; 
};