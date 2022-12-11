#include<stdio.h>
#include<string.h>

int main()
{
    
    int matris[3][3];

    for (int i = 1; i < 4; i++)
    {
        for (int j = 1; j < 4; j++)
        {
            printf("\nLutfen %d.satir ve %d. sutundaki sayiyi giriniz: ", i, j);
            scanf("%d", &matris[i][j]);

        }
        
    }
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
