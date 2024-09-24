#include <stdio.h>
#include <string.h>
int main(){
    char filo[20], classe[10], alimento[15];
    scanf("%s", filo);
    scanf("%s", classe);
    scanf("%s", alimento);
    if(strcmp(filo, "vertebrado") == 0) {
        if(strcmp(classe, "ave") == 0) {
            if(strcmp(alimento, "carnivoro") == 0) {
                printf("aguia\n");
            } else {
                printf("pomba\n");
            }
        }
        if(strcmp(classe, "mamifero") == 0) {
            if(strcmp(alimento, "onivoro") == 0) {
                printf("homem\n");
            } else {
                printf("vaca\n");
            }
        }
    }
    if(strcmp(filo, "invertebrado") == 0){
        if(strcmp(classe, "inseto") == 0) {
            if(strcmp(alimento, "hematofago") == 0) {
                printf("pulga\n");
            } else {
                printf("lagarta\n");
            }
        }
        if(strcmp(classe, "anelideo") == 0) {
            if(strcmp(alimento, "hematofago") == 0) {
                printf("sanguessuga\n");
            } else {
                printf("minhoca\n");
            }
        }
    }
    return 0;
}
