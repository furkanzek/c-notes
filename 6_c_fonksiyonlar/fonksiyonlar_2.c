#include<stdio.h>
#include<string.h>

void sirala(int a, int b){
    if (a>b)
    {
        printf("%d > %d", a, b);
    }else if (a<b)
    {
        printf("%d < %d", a, b);
    }else
    {
        printf("%d =  %d", a, b);
    }
}


int main()
{
    
    int sayi1, sayi2;
    printf("Lutfen sayi1 giriniz: ");
    scanf("%d", &sayi1);
    printf("Lutfen sayi2 giriniz: ");
    scanf("%d", &sayi2);

    sirala(sayi1, sayi2);

    return 0;
}
