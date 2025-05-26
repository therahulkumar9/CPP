// #include <iostream>
// #include <cmath>
// using namespace std;

// int main()
// {
//     int a, b, c;
//     float root1, root2;
//     cout << "Enter value of a, b and c: ";
//     cin >> a >> b >> c;

//     root1 = (-b + sqrt(b*b - 4*a*c))/(2 * a);
//     root2 = (-b - sqrt(b*b - 4*a*c))/(2 * a);

//     cout << "Roots are: " << root1 << " " << root2;
//     return 0;
// }
#include <iostream>
#include <cmath>

int main()
{
    // Example 1: Quadratic Equation with Real Roots
    std::cout << "Example 1: Quadratic Equation with Real Roots" << std::endl;
    std::cout << "Quadratic Equation: x^2 + 5x + 6 = 0" << std::endl;
    double a1 = 1, b1 = 5, c1 = 6;
    double discriminant1 = b1 * b1 - 4 * a1 * c1;
    double root1 = (-b1 + std::sqrt(discriminant1)) / (2 * a1);
    double root2 = (-b1 - std::sqrt(discriminant1)) / (2 * a1);
    std::cout << "Roots: x = " << root1 << " and x = " << root2 << std::endl
              << std::endl;

    // Example 2: Quadratic Equation with Complex Roots
    std::cout << "Example 2: Quadratic Equation with Complex Roots" << std::endl;
    std::cout << "Quadratic Equation: x^2 + 2x + 1 = 0" << std::endl;
    double a2 = 1, b2 = 2, c2 = 1;
    double discriminant2 = b2 * b2 - 4 * a2 * c2;
    double real = -b2 / (2 * a2);
    double imag = std::sqrt(-discriminant2) / (2 * a2);
    std::cout << "Roots: x = " << real << " + " << imag << "i and x = " << real << " - " << imag << "i" << std::endl
              << std::endl;

    // Example 3: Quadratic Equation with Equal Roots
    std::cout << "Example 3: Quadratic Equation with Equal Roots" << std::endl;
    std::cout << "Quadratic Equation: x^2 - 4x = 0" << std::endl;
    double a3 = 1, b3 = -4, c3 = 0;
    double discriminant3 = b3 * b3 - 4 * a3 * c3;
    double root3 = -b3 / (2 * a3);
    std::cout << "Roots: x = " << root3 << " and x = " << root3 << std::endl
              << std::endl;

    // Example 4: Quadratic Equation with Rational Roots
    std::cout << "Example 4: Quadratic Equation with Rational Roots" << std::endl;
    std::cout << "Quadratic Equation: x^2 - 3x - 2 = 0" << std::endl;
    double a4 = 1, b4 = -3, c4 = -2;
    double discriminant4 = b4 * b4 - 4 * a4 * c4;
    double root4 = (-b4 + std::sqrt(discriminant4)) / (2 * a4);
    double root5 = (-b4 - std::sqrt(discriminant4)) / (2 * a4);
    std::cout << "Roots: x = " << root4 << " and x = " << root5 << std::endl
              << std::endl;

    // Example 5: Quadratic Equation with Irrational Roots
    std::cout << "Example 5: Quadratic Equation with Irrational Roots" << std::endl;
    std::cout << "Quadratic Equation: x^2 - 2x - 3 = 0" << std::endl;
    double a5 = 1, b5 = -2, c5 = -3;
    double discriminant5 = b5 * b5 - 4 * a5 * c5;
    double root6 = (-b5 + std::sqrt(discriminant5)) / (2 * a5);
    double root7 = (-b5 - std::sqrt(discriminant5)) / (2 * a5);
    std::cout << "Roots: x = " << root6 << " and x = " << root7 << std::endl;

    return 0;
}