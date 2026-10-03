// Turkiv Ostap Mykolaiovych, KN-2630
// Lab 2.1: Linear programs. Variant 19.

#include <iomanip>
#include <iostream>

int main() {
    double a;
    std::cout << "Enter a (a != 0, +/-2, +/-sqrt(2.5)): ";
    std::cin >> a;

    const double a2 = a * a;
    const double bracket = (1.0 + a + a2) / (2.0 * a + a2)
                         + 2.0
                         - (1.0 - a + a2) / (2.0 * a - a2);

    const double z1 = (5.0 - 2.0 * a2) / bracket;
    const double z2 = (4.0 - a2) / 2.0;

    std::cout << std::fixed << std::setprecision(10)
              << "z1 = " << z1 << '\n'
              << "z2 = " << z2 << '\n';
    return 0;
}
