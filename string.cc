#include <iostream>
#include <string>
using namespace std;
int main()
{
    string a = "0";
    string b(a);
    b = "1";
    cout << a << endl;
    return 0;
}