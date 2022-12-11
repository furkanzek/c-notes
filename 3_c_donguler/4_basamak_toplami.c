#include<stdio.h>

int main()
{
    //Girilen sayinin basamaklari toplami

    int sayi, kalan, toplam=0;
    printf("Lutfen bir sayi giriniz: ");
    scanf("%d", &sayi);

    while (sayi!=0)
    {
        kalan=sayi%10;
        toplam+=kalan;
        sayi=sayi/10;
    }

    printf("%d", toplam);
    

    return 0;
}
