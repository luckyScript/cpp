#include <iostream>
int main(void) 
{
    int i = 10, j = 20;
    int *p = &i;
    std::cout << p << " " << * p << std::endl;
    p = &j;
    std::cout << p << " " << * p << std::endl;
    j = 5;
    std::cout << p << " " << * p << std::endl;
    return 0;
}