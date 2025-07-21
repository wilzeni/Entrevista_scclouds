#include <stdio.h>
#include <stdlib.h>

int fibonacci(int x){
    if(x < 0) return -1;

    int a = 0, b = 1, fib = 0;

    for(int i = 2; i <= x; i++){
        fib = a + b;
        a = b;
        b = fib;
    }
    return fib;
}

int main()
{
    int n;

    printf("Digite um numero n para fib(n):");
    scanf("%d", &n);

    if(fibonacci(n) > 0) printf("Numero pra seguencia de fib(%d) eh %d\n", n, fibonacci(n));
    return 0;
}
