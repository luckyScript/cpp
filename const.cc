#include <iostream>
using namespace std;
int main()
{
    const int b = 30;
    // const int b; //error
    // a = 20; //error
    int a = b; // correct
    cout << a << endl;
    a++;
    cout << "a: " << a << "b: " << b << endl;
    return 0;
}