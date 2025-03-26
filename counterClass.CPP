#include <iostream>

class Counter {
private:
    int count;

public:
    // Constructor to initialize the count
    Counter() : count(0) {}

    // Method to increment the count
    void increment() {
        count++;
    }

    // Method to get the current count
    int getCount() const {
        return count;
    }
};

int main() {
    Counter counter;
    
    counter.increment();
    counter.increment();
    
    std::cout << "Current count: " << counter.getCount() << std::endl;
    
    return 0;
}
