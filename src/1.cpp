#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0));
    int a = rand() % 10 + 1;
    int b = rand() % 10 + 1;
    int c = a * b;
    std::cout << "The result is: " << c << std::endl;
    return 0;
}
