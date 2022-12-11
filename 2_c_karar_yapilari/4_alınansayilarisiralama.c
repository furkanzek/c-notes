#include<stdio.h>

int main()
{

    //Alinan 3 sayiyi buyukten kucuge siralanacak.

    int sayi1, sayi2, sayi3;

    printf("Lutfen 3 sayi giriniz: ");
    scanf("%d %d %d", &sayi1, &sayi2, &sayi3);

    if(sayi1<sayi2 && sayi1<sayi3){
        if (sayi2<sayi3)
        {
            printf("%d<%d<%d", sayi1, sayi2, sayi3);
        }else{
            printf("%d<%d<%d", sayi1, sayi3, sayi2);
        }
        
    }else if(sayi2<sayi1 && sayi2<sayi3){
        if (sayi1<sayi3)
        {
            printf("%d<%d<%d", sayi2, sayi1, sayi3);
        }else{
            printf("%d<%d<%d", sayi2, sayi3, sayi1);
        }
        
    }else if(sayi3<sayi1 && sayi3<sayi2){
        if (sayi1<sayi2)
        {
            printf("%d<%d<%d", sayi3, sayi1, sayi2);
        }else{
            printf("%d<%d<%d", sayi3, sayi2, sayi1);
        }
        
    }

    return 0;
}

