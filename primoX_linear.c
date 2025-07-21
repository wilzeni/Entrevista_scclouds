#include <stdio.h>
#include <stdlib.h>

void primosX(int x){
    if(x < 2){
        printf("Numero x invalido!");
        return;
    }

    printf("p(%d) = [", x);
    for(int i = 2; i <= x; i++){
        int primo = 1;
        for(int j = 2; j < i; j++){
            if(i % j == 0){
                primo = 0;
                break;
            }
        }
        if(primo == 1){
            printf("%d ", i);
        }
    }
    printf("]\n");
}

int main()
{
    int x;

    printf("Digite um numero x: ");
    scanf("%d", &x);

    primosX(x);
}
