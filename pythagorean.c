//pythagorean.c

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    float a;
    float b;
    float c;
    float p;
    float q;
    float r;
    float n;
    float o;
    a=get_float("Side 1");
    b=get_float("Side 2");
    c=get_float("Side 3");
    if(a>b)
    {
        if(a>c)
        {
            p=a;
            q=b;
            r=c;
        }
        else
        {
            p=c;
            q=a;
            r=c;
        }
    }
    else
    {
        if(b>c)
        {
            p=b;
            q=a;
            r=c;
        }
        else
        {
            p=c;
            q=a;
            r=b;
        }
    }
    n=(q*q)+(r*r);
    o=(p*p);
    if(n==o)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
}
