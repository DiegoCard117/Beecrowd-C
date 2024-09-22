#include <stdio.h>

int main(){
    int maior, menor, meio, numeros[3];
    
    scanf("%d %d %d", &numeros[0], &numeros[1], &numeros[2]);
    maior = numeros[0];
    menor = numeros[0];
    meio = numeros[0];
    for(int i = 0; i < 3; i++) {
        if(numeros[i] > maior) {
            maior = numeros[i];
        }
        if(numeros[i] < menor) {
            menor = numeros[i];
        }
    }
    
    for(int i = 0; i < 3; i++) {
        if(numeros[i] != menor && numeros[i] != maior){
            meio = numeros[i];
        }
    }
    
    printf("%d\n", menor);
    printf("%d\n", meio);
    printf("%d\n", maior);
    printf("\n");
    printf("%d\n", numeros[0]);
    printf("%d\n", numeros[1]);
    printf("%d\n", numeros[2]);
    return 0;
}
