#include<stdio.h>
#include<string.h>

int main()
{
    
    int matris[3][3]={{12,22,352},{47,527,67},{34,27,352}};

    //printf("%d",matris[2][1]);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", matris[i][j]);
        }
        printf("\n");
        
    }
    

    return 0;
}
