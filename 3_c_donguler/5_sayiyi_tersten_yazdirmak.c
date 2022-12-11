#include<stdio.h>

int main()
{
    //girilen  sayiyi tersten yazdirmak

    int sayi, ters=0;

    printf("Lutfen sayiyi giriniz: ");
    scanf("%d", &sayi);

    while (sayi!=0)
    {
        ters=ters*10;
        ters+=sayi%10;
        sayi=sayi/10;

    }
    printf("Girdiginiz sayinin tersi: %d", ters);
    

    return 0;
}
