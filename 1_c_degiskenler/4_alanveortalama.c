#include<stdio.h>
#include<math.h>

int main() {

//Cevresi X cm olan bir karenin alani?


int cevre;

printf("Karenin cevresi kac cm? = ");
scanf("%d", &cevre);


int kareninKenari = cevre/4;
int alan = pow(kareninKenari,2);

printf("\nKarenin alanı = %d", alan);


//Girilen 3 sayinin aritmetik ortalaması?

int sayi1;
int sayi2;
int sayi3;
int ortalama;

printf("Sayi1 giriniz: ");
scanf("%d", &sayi1);

printf("Sayi2 giriniz: ");
scanf("%d", &sayi2);

printf("Sayi3 giriniz: ");
scanf("%d", &sayi3);

ortalama = (sayi1+sayi2+sayi3)/3;

printf("Aritmetik ortalama: %d", ortalama);


    return 0;
}