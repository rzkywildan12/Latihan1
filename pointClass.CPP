#include <iostream>
#include <cmath> // For sqrt()

class Point {
private:
    double x, y;

public:
    // Constructor
    Point(double xCoord, double yCoord) : x(xCoord), y(yCoord) {}

    // Method to calculate the distance from the origin (0, 0)
    double distanceFromOrigin() const {
        return sqrt(x * x + y * y);
    }

    // Method to display the point
    void display() const {
        std::cout << "Point(" << x << ", " << y << ")" << std::endl;
    }
};

int main() {
    Point p(3.0, 4.0); // Example point (3,4)
    p.display();
    std::cout << "Distance from origin: " << p.distanceFromOrigin() << std::endl;
    return 0;
}
