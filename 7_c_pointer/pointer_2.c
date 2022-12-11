#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main()
{
    int miktar;
    printf("Lutfen kac adet sayi gireceginizi belirtiniz: ");
    scanf("%d", &miktar);

    int sayilar[miktar];

    for (int i = 1; i < miktar+1; i++)
    {
        printf("Sayi %d: ", i);
        scanf("%d", &sayilar);
    }
    
    printf("\n\n-----------------------------------------------\n\n");

    int *pointer;

    for (int j = 1; j < miktar+1; j++)
    {
        pointer=&sayilar[j];
        printf("Sayi %d'in bellekteki adresi: %x\n", j, pointer);
    }
    

    


    return 0;
}
