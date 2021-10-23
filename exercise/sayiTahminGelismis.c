#include<stdlib.h>
#include <stdio.h>
#include<time.h>
void main()
{
int sayi=0,tahmin=0;
int kackez=0;
srand(time(NULL));
sayi=rand()%100+1;
printf("Aklimdan Sayiyi Bulabilecek Misin?\nTahminin:");
scanf("%d", &tahmin);
while(tahmin!=sayi)
{
if(tahmin<sayi)
{
printf("Yanlis Tahmin.Daha Buyuk Sayi Tahmin Etmelisin!\nYeni Tahminin:");
scanf("%d", &tahmin);
kackez++;
}
else if(tahmin>sayi)
{
printf("Yanlis Tahmin.Daha Kucuk Sayi Tahmin Etmelisin!\nYeni Tahminin:");
scanf("%d", &tahmin);
kackez++;
}
else if(tahmin==sayi)
{
printf("Tebrikler %d Defada Bildiniz.",kackez+1);
}
}
printf("Tebrikler %d Sayisini %d Defada Bildiniz.", sayi, kackez+1);
}