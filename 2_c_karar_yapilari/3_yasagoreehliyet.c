#include<stdio.h>

int main() {

    //Kullanici, ad, soyad ve yas bilgisini girecek. 18'den buyukse ehliyet alacak.

    char ad[10];
    char soyad[10];
    int yas;

    printf("Adinizi giriniz: ");
    scanf("%s", &ad);

    printf("Soyadinizi giriniz: ");
    scanf("%s", &soyad);

    printf("Yasinizi giriniz: ");
    scanf("%d", &yas);

    if (yas<18)
    {
        printf("\n\nSayin %s %s, yasiniz tutmadigindan dolsyi ehliyet alamazsiniz.", ad, soyad);
    }else
    {
        printf("\n\nSayin %s %s, yasiniz ehliyet almaya uygundur.", ad, soyad);
    }
    
    
    



    return 0;
}
