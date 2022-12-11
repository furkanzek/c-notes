#include<stdio.h>
#include<string.h>

int toplama(int a, int b){
    int toplam=a+b;
    return toplam;
}

int main()
{
    int sayi1, sayi2;
    scanf("%d %d", &sayi1, &sayi2);

    printf("%d", toplama(sayi1,sayi2));
    


    return 0;
}
