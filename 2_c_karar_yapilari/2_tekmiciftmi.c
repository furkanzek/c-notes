#include<stdio.h>

int main() {

//Girilen sayinin tek mi cift mi olduğunu bul.

int sayi;
int kalan;

printf("Bir sayi giriniz: ");
scanf("%d", &sayi);

kalan = sayi%2;

if(kalan == 0) {
    printf("Girilen sayi cifttir.");
}else {
    printf("Girilen sayi tektir.");
}


    return 0;
}
