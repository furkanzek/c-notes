#include<stdio.h>

int main()
{
    //Faktoriyel hesaplama

    int sayi;

    printf("Lutfen faktoriyelini almak istediginiz sayiyi giriniz: ");
    scanf("%d", &sayi);

    int x=1;
    int faktoriyel=1;

    while (x<=sayi)
    {
        faktoriyel=faktoriyel*x;
        x++;
        if (x==sayi+1)
        {
            printf("%d", faktoriyel);
        }
        
    }
    

    return 0;
}
