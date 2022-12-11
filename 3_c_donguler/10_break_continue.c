#include<stdio.h>

int main()
{
    int i;

    for ( i = 0; i < 10; i++)
    {
        if (i==5)
        {
            continue; //atla
        }else if (i==8)
        {
            break; //donguyu bitir
        }
        
    printf("%d",i);
        
    }

    return 0;
}
