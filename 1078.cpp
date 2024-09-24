#include <stdio.h>

int main(){
    int a, total;
    scanf("%d", &a);
    for(int i = 1; i <= 10; i++) {
        total = i * a;
        printf("%d x %d = %d\n", i, a, total);    
    }
    return 0;
}
