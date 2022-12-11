#include<stdio.h>
#include<string.h>


void kullanici(char isim[20]){
    printf("Adiniz: %s", isim);
}


int main()
{
    
    char isim[20];

    printf("Kullanici adinizi giriniz: ");
    scanf("%s", &isim); 

    kullanici(isim);


    return 0;
}
