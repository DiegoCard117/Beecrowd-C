#include <stdio.h>

int main(){
    int numeros[5];
    int quantidade = 0;
    scanf("%d %d %d %d %d", &numeros[0], &numeros[1], &numeros[2], &numeros[3], &numeros[4]);
    for(int i = 0; i < 5; i++) {
        if(numeros[i] % 2 == 0) {
            quantidade++;
        }
    }
    printf("%d valores pares\n", quantidade);
    return 0;
}
