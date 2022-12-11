#include<stdio.h>

int main()
{
    //Girilen sayiya kadar olan sayilar toplanacak
    
    int sayi;

    printf("Lutfen bir sayi giriniz: ");
    scanf("%d", &sayi);

    int x=0; 
    int toplam=0;

    while (x<=sayi)
    {
        toplam+=x;
        x++;
    }
    printf("%d", toplam);

    return 0;
}
