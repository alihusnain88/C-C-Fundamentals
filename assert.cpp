#include <cassert>
#include <iostream>
using namespace std;



int divide(int numerator, int denominator) {
    assert(denominator != 0); // Check for division by zero
    return numerator / denominator;
}

int main() {
    int result = divide(10, 2);
    std::cout << result << std::endl;  // Output: 5

    // This assertion will fail because denominator is 0
    result = divide(10, 0);

    
    
    return 0;
}