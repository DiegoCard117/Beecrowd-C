#include <stdio.h>

int main(){
    double numeros[6];
    int quantidade = 0;
    scanf("%lf %lf %lf %lf %lf %lf", &numeros[0], &numeros[1], &numeros[2], &numeros[3], &numeros[4], &numeros[5]);
    for(int i = 0; i < 6; i++) {
        if(numeros[i] > 0) {
            quantidade++;
        }
    }
    printf("%d valores positivos\n", quantidade);
    return 0;
}
