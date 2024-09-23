#include <stdio.h>

int main(){
    int number;
    scanf("%d", &number);
    for(int i = number; i < 12 + number; i++) {
        if(i % 2 != 0){
            printf("%d\n", i);
        }
    }
    return 0;
}
