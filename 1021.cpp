#include <stdio.h>

int main(){
    double entrada;
    int number, temp;
    
    scanf("%lf", &entrada);
    temp = entrada * 100;
    
    printf("NOTAS:\n");
    
    number = temp / 10000;
    temp -= number * 10000;
    printf("%d nota(s) de R$ 100.00\n", number);
    
    number = temp / 5000;
    temp -= number * 5000;
    printf("%d nota(s) de R$ 50.00\n", number);
    
    number = temp / 2000;
    temp -= number * 2000;
    printf("%d nota(s) de R$ 20.00\n", number);
    
    number = temp / 1000;
    temp -= number * 1000;
    printf("%d nota(s) de R$ 10.00\n", number);
    
    number = temp / 500;
    temp -= number * 500;
    printf("%d nota(s) de R$ 5.00\n", number);
    
    number = temp / 200;
    temp -= number * 200;
    printf("%d nota(s) de R$ 2.00\n", number);
    
    printf("MOEDAS:\n");
    
    number = temp / 100;
    temp -= number * 100;
    printf("%d moeda(s) de R$ 1.00\n", number);
    
    number = temp / 50;
    temp -= number * 50;
    printf("%d moeda(s) de R$ 0.50\n", number);
    
    number = temp / 25;
    temp -= number * 25;
    printf("%d moeda(s) de R$ 0.25\n", number);
    
    number = temp / 10;
    temp -= number * 10;
    printf("%d moeda(s) de R$ 0.10\n", number);
    
    number = temp / 5;
    temp -= number * 5;
    printf("%d moeda(s) de R$ 0.05\n", number);
    
    number = temp;
    temp -= number;
    printf("%d moeda(s) de R$ 0.01\n", number);

    return 0;
}
