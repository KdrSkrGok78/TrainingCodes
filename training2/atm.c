#include<stdio.h>
#include <stdlib.h>

int main(void){
    int islem,miktar,bakiye=1000;
    char yeniden = 'e';

    printf("1-Bakiye sorgulaman \n 2-Para cekme \n 3-Para yatirma\n");

    while(yeniden=='e'){
        printf("Lutfen isleminizi seciniz!");
        scanf("%d",&islem);

        switch (islem)
        {
        case 1:
            printf("Bakiyeniz %d TL'dir!",bakiye);
            break;
        
        case 2:
            printf("Miktar giriniz: ");
            scanf("%d",&miktar);
            bakiye= bakiye-miktar;
            printf("Bakiyeniz %d TL'dir!",bakiye);
            break;

        case 3: 
            printf("Miktar giriniz: ");
            scanf("%d",&miktar);
            bakiye= bakiye+miktar;
            printf("Bakiyeniz %d TL'dir!",bakiye);
            break;

        default:
            printf("Gecersiz bir islem istegi!");
            break;
        }
        printf("Baska bir islem yapmak ister misiniz ? e/h");
        scanf("%s",&yeniden);
    }
        printf("Gorusmek dilegiyle...");

        return 0;
}