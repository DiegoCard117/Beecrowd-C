#include <stdio.h>

int main(){
    int numeros[5];
    int positivo = 0, negativo = 0, par = 0, impar = 0;
    scanf("%d %d %d %d %d", &numeros[0], &numeros[1], &numeros[2], &numeros[3], &numeros[4]);
    for(int i = 0; i < 5; i++) {
        if(numeros[i] % 2 == 0) {
            par++;
        }
        if(numeros[i] % 2 != 0) {
            impar++;
        }
        if(numeros[i] > 0) {
            positivo++;
        }
        if(numeros[i] < 0) {
            negativo++;
        }
    }
    printf("%d valor(es) par(es)\n", par);
    printf("%d valor(es) impar(es)\n", impar);
    printf("%d valor(es) positivo(s)\n", positivo);
    printf("%d valor(es) negativo(s)\n", negativo);
    return 0;
}
