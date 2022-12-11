#include <stdio.h>
#include "string.h"

int main()
{
    char ad[50]={"Furkan"}, soyAd[]={"Zekiri"};
    
    /*strcat
    printf(strcat(ad,soyAd));
    strcat(ad, soyAd);
    puts(ad);

    printf("\n--------------------------------------------\n");

    //strlen
    int len=strlen(ad);
    printf("%d", len);

    printf("\n--------------------------------------------\n");
    */

    //strcmp
    if (strcmp(ad,soyAd)==0)
    {
        printf("Ad ve soyad ayni.");
    }else
    {
        printf("Ad ve soyad farkli.");
    }

    printf("\n--------------------------------------------\n");

    /*strlwr
    printf(strlwr(ad));

    printf("\n--------------------------------------------\n");

    //strupr
    printf(strupr(ad));

    printf("\n--------------------------------------------\n");

    //strrev
    printf(strrev(ad));

    */

    return 0;
}