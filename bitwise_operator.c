// bitwise operator
int main()
{
    int a=10,b=11;
    printf("\n bitwise And:%d",a&b);
    printf("\nbitwise or:%d",a|b);
    printf("\nbitwise xor:%d",a^b);
    printf("\nbitwise not:%d",~b);
    //left shift operator
    a=16;
    b=a<<2;
    printf("\nleft shift operator:%d",b);
    //right shift operator
    b=a>>2;
    printf("\nright shift operator:%d",b);
    return 0;
}