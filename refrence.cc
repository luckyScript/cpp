#include <iostream>
void fuck(int &a);
int main(void)
{
    int b = 0;
    fuck(b);
    std::cout << b << std::endl;
    return 0;
}
void fuck(int &a) {
    a++;
}