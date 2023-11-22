#include <iostream>
#include <cmath>
#include <iomanip>

double S(double x, double eps, int& n) {
    double a = x;
    double s = a;
    double R;
    n = 0;
    do {
        n++;
        R = -((n * x) / (n + 1));
        a *= R;
        s += a;
    } while (std::abs(a) >= eps);
    return s;
}

int main() {
    double xp, xk, dx, eps, x, s;
    int n;

    std::cout << "xp = ";
    std::cin >> xp;
    std::cout << "xk = ";
    std::cin >> xk;
    std::cout << "dx = ";
    std::cin >> dx;
    std::cout << "eps = ";
    std::cin >> eps;

    std::cout << std::setw(10) << "x" << std::setw(20) << "ln(x+1)" << std::setw(20) << "S" << std::setw(10) << "n" << std::endl;

    x = xp;
    while (x <= xk) {
        s = S(x, eps, n);
        std::cout << std::setw(10) << x << std::setw(20) << log(x + 1) << std::setw(20) << s << std::setw(10) << n << std::endl;
        x += dx;
    }

    return 0;
}
