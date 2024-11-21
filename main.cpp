#include <iostream>
#include <cassert>

// Clase Point
class Point {
private:
    int x, y;

public:
    friend std::ostream& operator<<(std::ostream&, Point);
    Point() : x(0), y(0) {}
    Point(int x, int y) : x(x), y(y) {}

    int getX() const { return x; }
    int getY() const { return y; }

    void setX(int x) { this->x = x; }
    void setY(int y) { this->y = y; }

    bool operator==(const Point& other) const {
        return x == other.x && y == other.y;
    }

    bool operator!=(const Point& other) const {
        return !(*this == other);
    }

    Point& operator=(const Point& other) {
        if (this != &other) {
            x = other.x;
            y = other.y;
        }
        return *this;
    }

};

std::ostream& operator<<(std::ostream& output, Point point)
{
    output << "x: " << point.x;
    output << "y: " << point.y;
    return output; 
}

// 2. Implementar la clase PointArray, la cual va tendrá 
// como variables miembro, un puntero de tipo Point, 
// un tamaño. 6pts

class PointArray {
private:
    Point* points;
    size_t size;

public:
    PointArray() : points(nullptr), size(0) {}
    PointArray(size_t size) : size(size) {
        points = new Point[size];
    }

    // Constructor de copia AAAAAAAAA
    PointArray(const PointArray& other) {
        size = other.size;
        points = new Point[size];
        for (size_t i = 0; i < size; ++i) {
            points[i] = other.points[i];
        }
    }

    ~PointArray() {
        // delete dynamic allocated memory
        delete[] points;
    }

    PointArray& operator=(const PointArray& other) {
        // prevent dangling pointer this != &other
        if (this != &other) {
            delete[] points;
            size = other.size;
            points = new Point[size];
            for (size_t i = 0; i < size; ++i) {
                points[i] = other.points[i];
            }
        }
        // return reference, and not pointer
        return *this;
    }

    // Sobrecarga de operador de igualdad
    bool operator==(const PointArray& other) const {
        if (size != other.size) 
        {
            return false;
        }
        for (size_t i = 0; i < size; ++i) {
            // overloaded != 
            if (points[i] != other.points[i]) 
            {
                return false;
            }
        }
        return true;
    }

    bool operator!=(const PointArray& other) const {
        return !(*this == other);
    }

    // Point& operator[](size_t index) {
    //     if (index >= size) {
    //         throw std::out_of_range("Index out of bounds");
    //     }
    //     return points[index]; // Modificable
    // }


    // // const
    // const Point& operator[](size_t index) const {
    //     if (index >= size) {
    //         throw std::out_of_range("Index out of bounds");
    //     }
    //     return points[index]; 
    // }

    size_t getSize() const { return size; }
};

int main() {
    
}
