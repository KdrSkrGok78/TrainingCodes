#include <stdio.h>

int main(void)
{
    printf("Hosgeldiniz 2'den 5 basamakliya kadar sayilar tersten yazilabilir!\n");
    printf("Lutfen sayinizin kac basamakli olacagini giriniz:");
    int digit;
    scanf("%d",&digit);

    if (digit==2)
    {   int sayi1;
        printf("Lutfen sayinizi giriniz :");
        scanf("%d",&sayi1);

        int a = sayi1%10;
        int b = (sayi1-a)/10;

        printf("Sayiniz : %d%d",a,b);
    }
    else if(digit==3){
        
        int sayi1;
        printf("Lutfen sayinizi giriniz :");
        scanf("%d",&sayi1);
        int a = sayi1%10;
        int b = (sayi1%100-a)/10;
        int c = (sayi1 - b*10 - a)/100;

        printf("Sayiniz : %d%d%d",a,b,c);
    }
    else if(digit==4){
        
         int sayi1;
        printf("Lutfen sayinizi giriniz :");
        scanf("%d",&sayi1);   
        int a = sayi1%10;
        int b = (sayi1%100-a)/10;
        int c = (sayi1%1000 - b*10 - a)/100;
        int d = (sayi1 - c*100 - b*10 - a)/1000;
        printf("Sayiniz : %d%d%d%d",a,b,c,d);
    }
    else if(digit==5){
         int sayi1;
        printf("Lutfen sayinizi giriniz :");
        scanf("%d",&sayi1);
        int a = sayi1%10;
        int b = (sayi1%100-a)/10;
        int c = (sayi1%1000 - b*10 - a)/100;
        int d = (sayi1%10000 - c*100 - b*10 - a)/1000;
        int e = (sayi1 - d*1000-c*100-b*10-a )/10000;
        printf("Sayiniz : %d%d%d%d%d",a,b,c,d,e);
    }
    else{
        printf("Farkli basamak sayisina sahip sayilar hesaplanamiyor!");
    }
    return 0;
}