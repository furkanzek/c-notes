#include<stdio.h>
#include<string.h>

int main()
{
    
    int sifre=1234;
    char isim[]={"Furkan"};
    char isimGir[20];
    int sifreGir;

    printf("Lutfen isminizi giriniz: ");
    scanf("%s", &isimGir);

    printf("Lutfen sifrenizi giriniz: ");
    scanf("%d", &sifreGir);

    if (strcmp(isim, isimGir)==0 && sifre==sifreGir)
    {
        printf("Basarili giris!");
    }
    else
    {
        printf("Adinizi veya sifrenizi yanlis girdiniz!!!");
    }
    
    



    return 0;
}
