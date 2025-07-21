#include <stdio.h>
#include <stdlib.h>

int fibonacci(int x){
    if(x == 0) return 0;
    if(x == 1) return 1;
    return fibonacci(x - 1) + fibonacci(x - 2);
}

int main()
{
    int n;

    printf("Digite um numero n para fib(n):");
    scanf("%d", &n);

    if(fibonacci(n) > 0) printf("Numero pra seguencia de fib(%d) eh %d\n", n, fibonacci(n));
    return 0;
}
