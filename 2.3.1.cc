int main ()
{
    int i = 42;
    const int &r1 = i;
    int &r4 = r1 * 2;
}