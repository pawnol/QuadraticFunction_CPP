/*
Quadratic Formula
Pawelski
4/4/2022
Please follow the instructions on the activity sheet!
*/

#include <iostream>
#include <cmath>

int main()
{
    double a, b, c, discriminant;
    std::cout << "This program finds the solutions for a quadratic equation\n";
    std::cout << "in the form ax^2 + bx + c = 0.\n";
    std::cout << "What is the value for a? >> ";
    std::cin >> a;
    std::cout << "What is the value for b? >> ";
    std::cin >> b;
    std::cout << "What is the value for c? >> ";
    std::cin >> c;
    discriminant = std::pow(b, 2) - (4 * a * c);
    if (discriminant > 0)
    {
        double solution1, solution2;
        solution1 = (double) (-b + std::sqrt(discriminant)) / (2 * a);
        solution2 = (double) (-b - std::sqrt(discriminant)) / (2 * a);
        std::cout << "x = " << solution1 << std::endl;
        std::cout << "x = " << solution2 << std::endl;
    }
    else if (discriminant == 0)
    {
        double solution;
        solution = (double) -b / (2 * a);
        std::cout << "x = " << solution << std::endl;
    }
    else
    {
        std::cout << "There are two imaginary solutions, which this program"
            << "cannot calculate\n";
    }
    return 0;
}
