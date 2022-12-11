#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main()
{
    int sayi1 = 9;
    int sayi2 = 13;
    char strng = "f";
    int *pointer1, *pointer2;
    pointer1=&sayi1;
    pointer2=&sayi2;

    printf("sayi1 degeri: %d\nsayi1 bellekteki adresi hektadecimal: %x\n", *pointer1, pointer1);
    printf("sayi2 degeri: %d\nsayi2 bellekteki adresi hektadecimal: %x\n", *pointer2, pointer2);    


    return 0;
}
