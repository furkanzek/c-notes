#include<stdio.h>

int main() {

//Notu 50 altındaysa kalır, 50 üstündeyse geçer.

int not;

printf("Notunuzu giriniz: ");
scanf("%d", &not);

if(not >= 50){
    printf("Sinifi gectiniz!");
}else if(not <50) {
    printf("Ne yazik ki kaldiniz, bu seneyi tekrar etmeniz gerekecek!");
}


    return 0;
}