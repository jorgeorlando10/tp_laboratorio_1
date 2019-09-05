#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


int main()
{
    char seguir='s';
    int opcion=0;
    float numero1=0;
    float numero2=0;


    while(seguir=='s')
    {
        printf("...................................\n");
        printf("----------CALCULADORA--------------\n");
        printf("...................................\n");
        printf("1- Ingresar 1er operando :%.0f\n",numero1);
        printf("2- Ingresar 2do operando :%.0f\n",numero2);
        printf("-----------------------------------\n");
        printf("3- Calcular la suma \n");
        printf("4- Calcular la resta \n");
        printf("5- Calcular la division \n");
        printf("6- Calcular la multiplicacion \n");
        printf("7- Calcular el factorial \n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n");
        printf("====================================\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                system("cls");
                printf("Primer Operando: \n");
                scanf("%f",&numero1);
                break;

            case 2:
                system("cls");
                printf("Segundo Operando: \n");
                scanf("%f",&numero2);
                break;

            case 3:
                system("cls");
                printf("La suma es: %.0f\n",suma(numero1,numero2));
                printf("----------------------------------------\n");
                system("pause");
                break;

            case 4:
                system("cls");
                printf("La resta es: %.0f\n",resta(numero1,numero2));
                printf("----------------------------------------\n");
                system("pause");
                break;

            case 5:
                system("cls");
                if(numero1==0)
                {
                    printf("ERROR, No se puede dividir por cero\n");
                    printf("----------------------------------------\n");
                     system("pause");

                }
                else
                {
                    printf("La Division es: %.1f\n",division(numero1,numero2));
                    printf("----------------------------------------\n");
                system("pause");
                }
                break;

            case 6:
                system("cls");
                printf("La Multiplicacion es: %.0f\n",multiplicacion(numero1,numero2));
                printf("----------------------------------------\n");
                system("pause");
                break;

            case 7:

                system("cls");

                if(numero1==0)
                {
                    printf("ERROR,No se puede calcular\n");
                    printf("----------------------------------------\n");
                }

                else
                {
                    printf("El factorial es: %.0f\n",factorial(numero1));
                    printf("----------------------------------------\n");
                }


                system("pause");



                break;

            case 8:
                system("cls");
                printf("La Suma es: %.0f\n",suma(numero1,numero2));
                printf("La Resta es: %.0f\n",resta(numero1,numero2));

                 if(numero2==0)
                {
                    printf("ERROR, No se puede dividir por cero\n");


                }
                else
                {
                    printf("La Division es: %.1f\n",division(numero1,numero2));
                }
                printf("La Multiplicacion es: %.0f\n",multiplicacion(numero1,numero2));

                if(numero1==0)
                {
                    printf("no se puede calcular\n");
                }


                else
                {
                    printf("El factorial es: %.0f\n",factorial(numero1));
                }

                printf("-----------------------------------\n");
                system("pause");







                break;
            case 9:
                seguir = "n";
                 system("pause");

                break;
        }

    }
    return 0;
}
