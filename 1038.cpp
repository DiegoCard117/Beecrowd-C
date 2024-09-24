#include <stdio.h>
 
int main() {
    int codigo, quantidade;
    double total;
    scanf("%d %d", &codigo, &quantidade);
    
    switch(codigo) {
        case 1:
            total = 4.0 * quantidade;
            printf("Total: R$ %.2lf\n", total);
            break;
        case 2:
            total = 4.5 * quantidade;
            printf("Total: R$ %.2lf\n", total);
            break;
        case 3:
            total = 5.0 * quantidade;
            printf("Total: R$ %.2lf\n", total);
            break;
        case 4:
            total = 2.0 * quantidade;
            printf("Total: R$ %.2lf\n", total);
            break;
        case 5:
            total = 1.5 * quantidade;
            printf("Total: R$ %.2lf\n", total);
        break;
    }
    return 0;
}
