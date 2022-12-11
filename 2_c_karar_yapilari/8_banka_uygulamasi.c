#include<stdio.h>
#include<string.h>

int main()
{
    /*
    Ad, soyad alinacak. Bakiye gorulecek. 
    Para yatirma, cekme ve profili gorme secenekleri olacak.
    */

    char isim[10]="furkan";
    char isimGir[10];
    int sifre=0000;
    int alinacakSifre;
    int bakiye=100;
    int secim;
    int yatir;
    int cek;

    printf("Hosgeldiniz. \n\n\nLuften adinizi giriniz: ");
    scanf("%s", &isimGir);

    printf("\nLuften sifrenizi giriniz: ");
    scanf("%d", &alinacakSifre); 

    if (strcmp(isim,isimGir)==0 && alinacakSifre==sifre)
    {
        printf("Kullanici bilgileri dogru girildi.");
        printf("\n\nBakiyeniz: %d TL\n\n[1] Para yatirma\n[2] Para cekme\n[3] Profil bilgileri\n\n\nYukaridaki islemlerden birini seciniz: ", bakiye);
        scanf("%d", &secim);

        if (secim==1)
        {
            printf("Yatirmak istediginiz tutari giriniz: ");
            scanf("%d", &yatir);

            bakiye=bakiye+yatir;
            printf("Yeni bakiye: %d TL", bakiye);
        }else if (secim==2)
        {
            printf("Cekmek istediginiz tutari giriniz: ");
            scanf("%d", &cek);

            if (bakiye-cek<0)
            {
                printf("Hesabınızda yeterli bakiye yok!\n\nGuncel bakiyeniz: %d TL", bakiye);
            }else
            {
                bakiye=bakiye-cek;
                printf("Yeni bakiye: %d TL", bakiye);
            }
            
            

        }else if (secim==3)
        {
            printf("\nKullanici adiniz: %s\nSifreniz: %d\nBakiyeniz: %d", isim, sifre, bakiye);
        }else
        {
            printf("Gecersiz tuslama!");
        }
    }
    else
    {
        printf("Kullanici bilgileri yanlis girildi. Lutfen bilgilerinizi kontrol ediniz.");
    }
    

    return 0;
}
