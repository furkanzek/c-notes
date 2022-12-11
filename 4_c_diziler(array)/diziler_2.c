#include<stdio.h>

int main()
{
    int sayilar[5];
    int adet;

    printf("Lutfen kac adet sayi girmek istediginizi giriniz: ");
    scanf("%d", &adet);

    for (int i = 0; i < adet; i++)
    {
        printf("\nLutfen sayi %d giriniz: ", i+1);
        scanf("%d", &sayilar[i]);
    }
    

    return 0;
}
