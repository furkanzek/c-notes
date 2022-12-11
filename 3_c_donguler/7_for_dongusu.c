#include<stdio.h>

int main()
{
    //for dongusu
    //Ciftler ve tekler toplami

    int i;
    int sayi;
    int ciftlerToplami=0;
    int teklerToplami=0;

    printf("Lutfen bir sayi giriniz: ");
    scanf("%d", &sayi);

    for ( i = 0; i <= sayi; i++)
    {
        if (i%2==0)
        {
            ciftlerToplami+=i;
        }else
        {
            teklerToplami+=i;            
        }
        
        
    }
    printf("Ciftler toplami: %d", ciftlerToplami);
    printf("\nTekler toplami: %d", teklerToplami);

    return 0;
}
