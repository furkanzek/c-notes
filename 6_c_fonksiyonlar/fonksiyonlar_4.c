#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int karsilastir(int a, int b){
    if (a==b)
    {
        return 1;
    }else
    {
        return 0;
    }
    
}

int main()
{
    int sayi1, sayi2;
    scanf("%d %d", &sayi1, &sayi2);

    bool deger=karsilastir(sayi1,sayi2);

    if (deger)
    {
        printf("Sayilar esit");
    }else
    {
        printf("Sayilar esit degil");
    }
    
    return 0;
}
