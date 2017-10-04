#include <iostream>
int main(void) {
    int i = 10;
    int *p = &i;
    int &r = *p;
    std::cout << r << std::endl;
    return 0;
}