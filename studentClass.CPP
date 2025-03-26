#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int id;
    double grade;

public:
    // Constructor
    Student(string n, int i, double g) {
        name = n;
        id = i;
        grade = g;
    }

    // Display function
    void display() {
        cout << "Student Information:" << endl;
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main() {
    // Creating an object of Student class
    Student student1("Wildan Rizky Wijaya", 101, 89.5);
    
    // Displaying student information
    student1.display();
    
    return 0;
}
