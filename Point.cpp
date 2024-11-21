#include <iostream> 

class Point 
{
    friend std::ostream& operator<<(
        std::ostream&, Point
    );
    Point(int x, int y) : x{x} ,y{y} {}

    public:
        int getX()
        {
            return this->x;
        } 
        int getY() 
        {
            return this->y; 
        }
        void setX(int x)
        {
            this->x = x; 
        }
        void setY(int y)
        {
            this->y = y; 
        }

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