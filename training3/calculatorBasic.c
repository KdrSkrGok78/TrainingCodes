#include <stdio.h>

int main(void)
{

    //çoklu sayıları hesaplayabilen -2'den fazla sayıyı toplayabilen/çıkarabilen/bölebilen/çarpabilen - hesap makinesi

    float number1 = 0;
    float number2;
    char again = 'e';
    while (again == 'e')
    {
        printf("Yapmak istediginiz islem icin sembolunu tuslamaniz yeterlidir !\n ");
        char symbol;
        scanf("%s", &symbol);
        switch (symbol)
        {
        case '+':
            scanf("%f", &number2);
            number1 = number1 + number2;
            printf("%f\n", number1);
            break;
        case '-':
            scanf("%f", &number2);
            number1 = number1 - number2;
            printf("%f\n", number1);
            break;

        case '/':
            if (number1 == 0)
            {
                number1 = 1;
                scanf("%f", &number2);
                number1 = number1 / number2;
                printf("%f\n", number1);
            }
            else
            {
                scanf("%f", &number2);
                number1 = number1 / number2;
                printf("%f\n", number1);
            }
            break;
        case '*':
            if (number1 == 0)
            {
                number1 = 1;
                scanf("%f", &number2);
                number1 = number1 * number2;
                printf("%f\n", number1);
            }
            else
            {
                scanf("%f", &number2);
                number1 = number1 * number2;
                printf("%f\n", number1);
            }

            break;

        default:
            printf("Gecersiz islem istegi!\n");
            break;
        }
        printf("isleme devam etmek icin e'ye basiniz!\n");
        scanf("%s", &again);
    }

    return 0;
}