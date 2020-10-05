x#include <iostream>


int main() {
    double x, y;
    std::cout << "Please enter two numbers: ";
    std::cin >> x >> y;
    std::cout << "\nThe sum of " << x << " and " << y << " is " << x + y << std::endl;
    std::cout << "The difference between " << x << " and " << y << " is " << x - y << std::endl;
    std::cout << "The product of " << x << " and " << y << " is " << x * y << std::endl;
    std::cout << "The distance between " << x << " and " << y << " is " <<(x > y ? abs(x)-abs(y) : abs(y)-abs(x))<< std::endl;
    std::cout << "The mean average of " << x << " and " << y << " is " << (x + y)/2 << std::endl;
}
