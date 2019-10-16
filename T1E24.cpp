#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int  main (void) {

    int indicador;

    printf ("Ingrese un valor entre el 1 y 4:");
    scanf ("%d",&indicador);

    switch (indicador) {
        case  1 :
            printf ( " \n Calor \n " );
        break ;
        case  2 :
            printf ( " \n Templado \n " );
        break ;
        case  3 :
            printf ( " \n Frio \n " );
        break ;
        case  4 :
            printf ( " \n Fuera de rango \n " );
        break ;
        default :
            printf ( " \n Error \n " );
    }

}
