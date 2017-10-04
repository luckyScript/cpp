#include <iostream>

void swap(int &a, int &b);
using namespace std;
int main(void)
{
    int x = 1;
    int y = 5;
    swap(x, y);
    cout << "x: " << x << " y: " << y << endl;
    return 0;
}

void swap(int &a, int &b) {
    int c;
    c = a;
    a = b;
    b = c;
}