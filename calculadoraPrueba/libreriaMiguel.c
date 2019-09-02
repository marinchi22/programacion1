#include <stdio.h>
#include <stdlib.h>
#include "libreriaMiguel.h"

int menuDeOpciones()
/** \brief imprime en pantalla las opciones de funciones de la calculadora
 * \param recibe la eleccion de funcion del usuario
 */

{
    char salida;
    char opcion;
    do
    {
        printf("\n ------ Menu de Opciones ------");
        printf("\n Ingrese la opcion deseada");
        printf(" \n a- Para Sumar: ");
        printf("\n b- Para Restar: ");
        printf("\n c- Para Multiplicar: ");
        printf("\n d- Para Dividir: ");
        printf("\n Presione s para salir: ");
        scanf(" \n %c",&opcion);

        switch (opcion)
        {

        case 'a':
            printf("\n Usted eligio Sumar \n");
            fflush(stdin);
            sumar();
            break;
        case 'b':
            printf("\n Usted eligio Restar \n");
            fflush(stdin);
            restar();
            break;
        case 'c':
            printf("\n usted eligio Multiplicar \n");
            fflush(stdin);
            multiplicar();
            break;
        case 'd':
            printf("\n usted eligio Dividir \n");
            fflush(stdin);
            dividir();
            break;
        case 's':
            printf("Usted eligio salir");
            fflush(stdin);
            printf("\n Esta seguro?");
            scanf("%c",&salida);
            break;
        default:
            printf(" \n Error, no ingreso una opcion valida");
            fflush(stdin);
            break;
        }

    }
    while( salida !='s');
    return 0;
}

int sumar()
/** \brief Funcion de sumar
 *
 * \param num1= al primer numero ingresado por el usuario
 * \param num2= al segundo numero ingresado por el usuario
 * \return el resultado de la suma
 *
 */
{
    float num1;
    float num2;
    float suma;
    printf("Ingrese el primer numero: ");
    scanf(" \n %f",&num1);
    fflush(stdin);
    printf("\n Ingrese el segundo numero :");
    scanf("\n %f",&num2);
    fflush(stdin);
    suma=(num1+num2);
    printf("\n la suma de %f y de %f da como resultado : %.2f \n ",num1,num2,suma);
    return suma;
}

int restar()
{
    float num1;
    float num2;
    float resta;
    printf("ingrese el primer numero: ");
    scanf("\n %f",&num1);
    fflush(stdin);
    printf("\n Ingrese el segundo numero: ");
    scanf("\n %f",&num2);
    fflush(stdin);
    resta= num1-num2;
    printf("\n La resta de %f y %f da como resultado : %.2f \n",num1,num2,resta);
    return resta;
}
int multiplicar()
{
    float num1;
    float num2;
    float multiplicasion;
    printf("ingrese el primer numero: ");
    scanf("\n %f",&num1);
    fflush(stdin);
    printf("\n Ingrese el segundo numero: ");
    scanf("\n %f",&num2);
    fflush(stdin);
    if(num1== 0 || num2==0)
    {
        printf("\n ATENCION: Todo numero multiplicado por 0 es igual a 0 \n");
    }
    else
    {
        multiplicasion= (float) num1*num2;
        printf("\n La multiplicasion de %f y %f da como resultado : %.2f \n",num1,num2,multiplicasion);
    }
    return multiplicasion;
}

int dividir()
{
    float num1;
    float num2;
    float division;
    printf("ingrese el primer numero: ");
    scanf("\n %f",&num1);
    fflush(stdin);
    printf("\n Ingrese el segundo numero: ");
    scanf("\n %f",&num2);
    fflush(stdin);
    if(num1== 0 || num2==0)
    {
        printf("\n ATENCION : No es posible dividir por 0 \n");
    }
    else
    {
        division= (float) num1/num2;
        printf(" \n La division de %f y %f da como resultado : %.2f \n",num1,num2,division);
    }
    return division;
}
