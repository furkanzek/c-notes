#include<stdio.h>

int main()
{
    //Asallik kontrolu

    int i, sayi, sayac=0;

    printf("Lutfen sayi giriniz: ");
    scanf("%d", &sayi);

    for ( i = 2; i < sayi; i++)
    {
        if (sayi%i==0)
        {
            sayac++;
        }
        
        
    }
    if (sayac==0)
    {
        printf("Sayi asaldir.");
    }
    else
    {
        printf("Sayi asal değildir.");
    }
        
    



    return 0;
}
