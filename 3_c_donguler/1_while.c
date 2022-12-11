#include<stdio.h>

int main()
{
    //0'dan 100'e kadar olanlari 2'ser sirala

    int x=0;
    while (x<=100)
    {
        if (x%2==0)
        {
            printf("%d\n", x);
        }
        x++;

    }
    

    return 0;
}
