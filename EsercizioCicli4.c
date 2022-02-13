#include <stdio.h>

int main()
{
    int numero;
    do
    {
        printf("Inserisci un numero intero positivo \n");
        scanf("%d", &numero);
    } while (numero < 0);
    printf("I numeri interi compresi nell'intervallo tra %d e %d sono: \n", -numero, numero);
    for (int i = -numero; i <= numero; i++)
    {
        printf("%d \n", i);
    }
    return 0;
}