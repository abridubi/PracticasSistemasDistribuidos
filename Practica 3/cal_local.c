/* programa principal*/
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "cal_local.h"
int  main()
{

    char c1;
    int a, b;
    printf("Introduce el valor del primer numero: ");
    scanf("%d", &a);
    printf("Introduce el valor del segundo numero: ");
    scanf("%d", &b);

    printf("\n La suma es: %d", suma(a, b));
    printf("\n La resta es: %d", resta(a, b));
    printf("\n El producto es: %d", producto(a, b));
    printf("\n La division es: %d", division(a, b));

   
    //Para que nos salga lo de presione una tecla para continuar...
    system("pause");

}
