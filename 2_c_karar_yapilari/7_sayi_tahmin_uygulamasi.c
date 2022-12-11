#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    /*
    Ad soyad ile kayit yapilacak, tahmin girilecek. 
    Bilgisayar, random olusturdugu sayiyi tahmin ile karsilastiracak.
    */
   
    char ad[10], soyad[10];
    int tahmin, random;

    printf("Adiniz: ");
    scanf("%s", &ad);

    printf("Soyadiniz: ");
    scanf("%s", &soyad);

    printf("Tahmininiz (0 ve 10 arasında): ");
    scanf("%d", &tahmin);

    printf("\n-------------------------------------------");

    printf("\n\nSayin %s %s, tahmin oyunu sonuclarınız asagidaki gibidir:\n\n\n", ad, soyad);

    srand(time(NULL)); 
    random=rand()%10;

    printf("Tahmininiz: %d\nBilgisayarin secimi: %d", tahmin, random);

    if (tahmin == random)
    {
        printf("\n\nTebrikler, tahmininiz dogru!");
    }else
    {
        printf("\n\nTahmininiz tutmadi, lutfen tekrar deneyiniz!");
    }
    
    

    

    return 0;
}
