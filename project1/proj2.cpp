#include <iostream>

int main()
{
    double x, y;
    double* a;
    double* b;
    a = &x;
    b = &y;

    std::cout << "Enter the value of x: ";
    std::cin >> x;

    std::cout << "Enter the value of y: ";
    std::cin >> y;

    double sum = *a + *b;  // Dereference pointers to add the values

    std::cout << "x: " << x << ", y: " << y << ", sum: " << sum << std::endl;

    return 0;
}