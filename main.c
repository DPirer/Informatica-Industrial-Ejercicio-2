#include <stdio.h>

// Pedro Antonio Estévez Pérez

// Ejercicio 2

/* Realice un programa en C que calcule la serie de Fibonacci de un número n,
 * sabiendo que esta serie se caracteriza por: xn = xn-1 + xn-2 */

void main()
{
    int n, v, i, suma=2;
    while (1)
    {
        printf("Introduce el numero de elementos que quieras: ");
        scanf("%d", &n);
        if (n <= 0)
            printf("Anda, mete un numero valido\n");
        else
            break;
    }

    /* El problema de esta secuencia, es que usa los dos términos anteriores, por lo tanto,
     * habrá que definirlos con antelación para poder usarlos en caso de que metamos el 3
     * ó mayor, y crear casos especiales. Tanto si n=1 como si n=2 podría crear dos vectores
     * y luego concatenarlos, pero como sólo son dos elementos, es más cómodo imprimirlos
     * directamente.*/

    if (n == 1)
    {
        printf("La secuencia es: [ 1 ");
        suma = 1;
    }
    if (n == 2)
        printf("La secuencia es: [ 1 1 ");

    if (n >= 3)
    {
        int v[n];
        v[0]=1; v[1]=1; //Necestamos los dos primeros elementos para usarlos
        printf("La secuencia es: [ 1 1 ");

        for (i=2; i<n; i++)
        {
            v[i] = v[i-1] + v[i-2];
            suma = suma + v[i];
            printf("%d ", v[i]);
        }
    }

    printf("]\n");
    printf("La suma es: %d\n\n", suma);
}
