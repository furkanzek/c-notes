#include<stdio.h>
#include<string.h>
#include<stdbool.h>


void giris(){
    printf("\nHosgeldiniz!\n\nYarismamiz puan sistemlidir. \nLufen kullanici adinizla giris yapiniz, kayit olmadiysaniz kayit olunuz.");
} 

int secenek(){
    int secim;
    printf("\nLutfen seceneklerden birini seciniz\n\n[1]Giris Yap\n[2]Kayit Ol\n\nSecim: ");
    scanf("%d", &secim);
    return secim;
}

int girisYap(char kullaniciAdi[20], int sifre){
    char kullaniciAdiGiris[20];
    int sifreGiris;
    bool kontrol=false;
    while (kontrol==false)
    {

        printf("\nLutfen kullanici adi giriniz:");
        scanf("%s", &kullaniciAdiGiris);
        printf("\nLutfen sifre giriniz:");
        scanf("%d", &sifreGiris);
    
        if (strcmp(kullaniciAdi,kullaniciAdiGiris)==0&&sifre==sifreGiris)
        {
            printf("Sisteme hosgeldiniz!");
            kontrol = true;
        }else
        {
        printf("Hatali giris!");
        }
    }
    
}

int kayitOl(){
    char kayitAdi[20];
    int kayitSifre;
    printf("\nLutfen bir kullanici adi belirleyin: ");
    scanf("%s", &kayitAdi);
    printf("\nLutfen bir sifre belirleyin: ");
    scanf("%d", &kayitSifre);
    printf("\nBasarili bir sekilde kayit oldunuz. Giris ekranina yonlendiriliyorsunuz.");
    girisYap(kayitAdi, kayitSifre);
}

int yarisma(){
    int puan=0;

    /*Buraya sorular girilecek*/

    return puan;
}

int yarismaSonu(int puan){
    printf("Yarismayi su kadar puanla bitirdiniz: %d", puan);
}

int main()
{
    char kullaniciAdi[20]="furkan";
    int sifre=1299;
    giris();  
    int secim = secenek();

    if (secim==1)
    {
        girisYap(kullaniciAdi,sifre);
    }else if (secim==2)
    {
        kayitOl();
    }else
    {
        printf("Gecersiz bir secenek girdiniz!");
    }
    
    int skor = yarisma();
    yarismaSonu(skor); 

    
    
    


    return 0;
}
