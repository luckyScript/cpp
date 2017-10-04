#include <iostream>
#include <string>
int main() {
    using namespace std;
    string line;
    string::size_type len;
    while (getline(cin, line))
    {
        cout << line << endl;
    }
    return 0;
}