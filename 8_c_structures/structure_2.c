#include<stdio.h>
#include<string.h>
#include<stdbool.h>

struct calisanBilgi
{
    char isim[20];
    char soyIsim[20];
    int maas;
};


int main()
{
    int sayi;
    printf("Kac calisan gireceksiniz?: ");
    scanf("%d", &sayi);

    struct calisanBilgi calisan[sayi];
    int i = 1;
    for (i = 1; i < sayi+1; i++)
    {
        printf("\n\n\n[%d.Calisan]", i);
  
        printf("\nCalisanin adi nedir?: ");
        scanf("%s", &calisan[i].isim);

        printf("\nCalisanin soyadi nedir?: ");
        scanf("%s", &calisan[i].soyIsim);

        printf("\nCalisanin maasi ne kadar?: "); 
        scanf("%d", &calisan[i].maas);
    }
    
    for (i = 1; i < sayi+1; i++)
    {
        printf("\nCalisan %d = %s %s, %d", i, calisan[i].isim, calisan[i].soyIsim, calisan[i].maas);
    }
    
    


    return 0;
}
