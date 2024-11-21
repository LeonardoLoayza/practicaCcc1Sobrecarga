#ifndef POINTARRAY_H
#define POINTARRAY_H

#include <iostream> 
#include "Point.h"

class PointArray
{
public:
    friend std::ostream& operator<<(std::ostream&, PointArray);
    void operator=(PointArray &);
    bool operator==(Point &);
    bool operator!=(Point &);
    void operator[](Point &);
private: 
    Point * ptr;
    int size; 
};
#endif