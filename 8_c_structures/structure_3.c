#include<stdio.h>
#include<string.h>
#include<stdbool.h>

struct detay
{
    char renk[20];
    char boyut[20];
    char dipnot[20];
};


struct urun
{
    char isim[20];
    int sayi;
    struct detay bilgi;
};


int main()
{
    
    struct urun urunBir;
    strcpy(urunBir.isim, "Televizyon");
    urunBir.sayi=500;
    strcpy(urunBir.bilgi.boyut, "1500x800");
    strcpy(urunBir.bilgi.renk,"Kirmizi");
    strcpy(urunBir.bilgi.dipnot, "Sahibinden kiralik");

    printf("\nAsagida urun bilgisi yer almaktadir.\n");
    printf("\nUrun: %s\nStok: %d\nBoyut: %s\nRenk: %s\nDipnot: %s\n", urunBir.isim, urunBir.sayi, urunBir.bilgi.boyut, urunBir.bilgi.renk, urunBir.bilgi.dipnot);




    return 0;
}
