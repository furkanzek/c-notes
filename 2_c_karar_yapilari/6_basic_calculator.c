#include<stdio.h>

int main()
{

    //4 islem yapabilen basic bir hesap makinesi yapilacak.

    int sayi1, sayi2, islem;
    float toplama, cikartma, carpma, bolme;

    printf("Lutfen sayi1 giriniz: ");
    scanf("%d", &sayi1);

    printf("Lutfen sayi2 giriniz: ");
    scanf("%d", &sayi2);

    toplama = sayi1+sayi2;
    cikartma = sayi1-sayi2;
    carpma = sayi1*sayi2;
    bolme = sayi1/sayi2;

    printf("\n\n\n[1] Toplama\n[2] Cikartma\n[3] Carpma\n[4] Bolme\n\nLutfen yukaridaki islemlerden birini seciniz: ");
    scanf("%d", &islem);

    switch (islem)
    {
    case 1:printf("Isleminizin sonucu: %f", toplama);break;
    case 2:printf("Isleminizin sonucu: %f", cikartma);break;
    case 3:printf("Isleminizin sonucu: %f", carpma);break;
    case 4:printf("Isleminizin sonucu: %f", bolme);break;    
    default:printf("Hatali islem tusladiniz!");break;
    }

    return 0;
}
