#include<iostream>
#include<string>
using namespace std;
class Person {
public:
//  Person() = default;
    Person(std::istream &is);
private:
    int a;
};
Person::Person(std::istream &is) 
{
    is >> *this;
}
int main()
{
    Person ren2(cin);	
    return 0;
} 