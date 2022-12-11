#include<stdio.h>
#include<string.h>
#include<stdbool.h>

struct arabalar
{
    char marka[20];
    char model[20];
    int yil;
    int beygir;
};


int main()
{
    struct arabalar alfaRomeo = {"Alfa Romeo", "4C", 2017, 240};
    struct arabalar astonMartin = {"Aston Martin", "DB7", 2004, 420};    
    printf("-----------------ARABALAR-----------------\n%s\t%s\t%d\t%d\n\n", alfaRomeo.marka, alfaRomeo.model, alfaRomeo.yil, alfaRomeo.beygir);
    printf("\n%s\t%s\t%d\t%d\n\n", astonMartin.marka, astonMartin.model, astonMartin.yil, astonMartin.beygir);


    return 0;
}
