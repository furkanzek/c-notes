#include<stdio.h>
#include<string.h>
#include<stdbool.h>

struct ogrenciler
{
    char adSoyad[30];
    int dogumYili;
    int numara;
};

void bilgileriGoster(struct ogrenciler bilgi){
    printf("\n\n\nAd ve soyad: %s\nDogum yili: %d\nNumarasi: %d\n", bilgi.adSoyad, bilgi.dogumYili, bilgi.numara);
}

struct ogrenciler ogrenciKayit(){
    struct ogrenciler kayit;
    printf("\nLutfen ad soyad giriniz: ");
    scanf("%s", &kayit.adSoyad);

    printf("\nLutfen dogum yili giriniz: ");
    scanf("%d", &kayit.dogumYili);

    printf("\nLutfen numara giriniz: ");
    scanf("%d", &kayit.numara);

    return kayit;
}


int main()
{
    struct ogrenciler ogrenci1 = ogrenciKayit(); 
    bilgileriGoster(ogrenci1);


    return 0;
}
