#include<stdio.h>

int main()
{
    //Carpim tablosu

    int i;
    int j;

    for ( i = 1; i < 10; i++)
    {
        for ( j = 1; j < 5; j++)
        {
            printf("%d * %d = %d\n", i, j, i*j);
        }
        
    }
    

    return 0;
}
