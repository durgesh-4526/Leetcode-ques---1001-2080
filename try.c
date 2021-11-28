#include <stdio.h>
int main()
{
    float a, b, c, larger;
    printf("Enter three number: \n");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    // scanf("the ans %f is %f ho %f ",&a,&b,&c);
    if (a > b){
        if (a > c)
        {
            larger = a;
        }
        else
        {
            larger = c;
        }
    }
    //(6.2>6.1)
    else if (b > c)
    //(6.1>6.11)
    {
        larger = b;
    }
    else
    {
        larger = c;
    }
    printf("Largest number is %f", larger);
    

    return 0;
}