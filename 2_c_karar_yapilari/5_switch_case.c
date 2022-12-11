#include<stdio.h>

int main()
{
    
    int sec;

    printf("Lutfen 1, 2 ya da 3'u seciniz: ");
    scanf("%d", &sec);

    switch (sec)
    {
    case 1: printf("1 numarali secenek secildi!");break;
    case 2: printf("2 numarali secenek secildi!");break;
    case 3: printf("3 numarali secenek secildi!");break;
    default:printf("Hatali bir giris yaptiniz!!");break;
    }

    return 0;
}
