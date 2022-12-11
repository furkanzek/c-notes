#include<stdio.h>

int main() {

//tekli yotum satırı

int sayi1 = 6;
float sayi2 = 2.1;
double sayi3 = 5.232324;
char harf1 = 'f';

printf("Integer degiskeninde sayi1'in degeri sudur: %d\nFloat degiskeninde sayi2'nin degeri sudur: %f\nDouble degiskeninde sayi3'un degeri sudur: %lf\nChar degiskeninde harf1'in degeri sudur: %c\n", sayi1, sayi2, sayi3, harf1);

int integerDegiskeni;
float floatDegiskeni;
double doubleDegiskeni;
char charDegiskeni;

printf("Integer degiskeninin bellekte kapladıgı alan: %ld\n", sizeof(integerDegiskeni));
printf("Float degiskeninin bellekte kapladıgı alan: %ld\n", sizeof(floatDegiskeni));
printf("Double degiskeninin bellekte kapladıgı alan: %ld\n", sizeof(doubleDegiskeni));
printf("Char degiskeninin bellekte kapladıgı alan: %ld", sizeof(charDegiskeni));

/*  çoklu yorum satırı
    dnjwedkwedl
    wjfewmdkş
    gibi.
*/

    return 0;
}