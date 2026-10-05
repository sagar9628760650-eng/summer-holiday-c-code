#include <stdio.h>

int main()
{
    float a,b,c;
    printf("inter the sides ");
    scanf ("%f%f%f",&a,&b,&c);
    if(a+b>c&&b+c>a&&a+c>b)
    {
        if(a==b&&b==c)
        {
            printf("The triangle is Equilateral.\n");
        }
        else if (a==b||b==c||c==a)
        {
            printf("The triangle is Isosceles.\n");
        }
        else if(a*a+b*b==c*c||
                b*b+c*c==a*a||
                a*a+c*c==b*b)
        {
            printf("The triangle is Right-angled.\n");
        }
        else
        {
            printf("The triangle is Scalene.\n");
        }
    }
    else
    {
        printf("The given sides do not form a valid triangle.\n");
    }

    return 0;
}