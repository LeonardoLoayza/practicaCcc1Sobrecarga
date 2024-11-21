#ifndef POINT_H
#define POINT_H

#include <iostream> 

class Point 
{
    friend std::ostream& operator<<(std::ostream&, Point);
    Point(int, int);
    public:
        int getX();
        int getY();
        void setX(int x);
        void setY(int y);
    private: 
        int x; 
        int y; 
};

std::ostream& operator<<(std::ostream& output, Point point)
{
    output << "x: " << point.x;
    output << "y: " << point.y;
    return output; 
}
#endif