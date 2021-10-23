#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){
    int randomNumber;
    srand(time(NULL));//srand rastgele sayı dizisi üretmek için başlangıç değerimizdir o olmazsa rand hep aynı sonucu çıkarır
    randomNumber = rand()%100;// rand()%100 ile [0,100] arasından sayı seçtiriyoruz
    int getNumber;

    printf("Sayi Tahmin Oyununa Hosgeldiniz. Bilgisayar bir sayi secti onu tahmin edebilir misiniz ? :");
    scanf("%d",&getNumber);

    if(randomNumber == getNumber){
        printf("Tebrikler oyunu kazandiniz.");
    }
    else{
        printf("Uzgunum oyunu kaybettiniz.Bilgisayarin sectigi sayi : %d",randomNumber);
    }
    return 0;
    
}