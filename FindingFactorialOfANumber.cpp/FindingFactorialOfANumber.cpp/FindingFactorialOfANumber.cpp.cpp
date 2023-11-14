#include <iostream>

unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}

int main() {
        std::cout << "Enter a non-negative integer: ";
    int num;
    std::cin >> num;

    if (num < 0) {
        std::cerr << "Error: Please enter a non-negative integer.\n";
        return 1;
    }

    unsigned long long result = factorial(num);
    std::cout << "Factorial of " << num << ": " << result << std::endl;

    return 0;
}
