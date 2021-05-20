#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int patterntype;
    int rows;
    int i;
    int j;
    int k;
    patterntype=get_int("Enter type of pattern (1 or 2)");
    rows=get_int("Number of rows");
    if(patterntype==1)
    {
        for(i=rows;i>=1;i--)
        {
            for(j=1;j<=i;j++)
            {
                printf("#");
            }
        printf("\n");
        }
    }
    else if(patterntype==2)
    {
        for(i=rows;i>=1;i--)
        {
            for(j=1;j<=i-1;j++)
            {
                printf(" ");
            }
            for(k=rows;k>=i;k--)
            {
                printf("#");
            }
            printf("\n");
        }
    }
    else
    {
        printf("Enter a valid number");
    }
}
