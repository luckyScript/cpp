int fact(int num)
{
    int product = 1;
    while (num != 1) 
    {
         product *= num--;
    }
    return product;
}