#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    // Constructor
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    // Function to calculate area
    double calculateArea() {
        return length * width;
    }
};

int main() {
    double length, width;
    
    cout << "Enter length of the rectangle: ";
    cin >> length;
    cout << "Enter width of the rectangle: ";
    cin >> width;
    
    // Create object of Rectangle class
    Rectangle rect(length, width);
    
    // Display the area
    cout << "Area of the rectangle: " << rect.calculateArea() << endl;
    
    return 0;
}
