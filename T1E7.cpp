# include  <stdio.h>
# include  <stdbool.h>
# include  <stdlib.h>
# include  <conio.h>
int  main (void){
int a, b, c;

printf ( " Numero Mayor de tres numeros \n " );
printf ( " Ingrese tres numeros enteros diferentes: \n \n " );
scanf ( " % d  % d  % d " , & a, & b, & c);

if (a> b && a> c) {
    printf ( " \n \n El primer numero es mayor \n \n " );
}

if (b> a && b> c) {
    printf ( " \n \n El segundo numero es mayor \n \n " );
}

if (c> a && c> b) {
    printf ( " \n \n El tercer numero es mayor \n \n " );
}
}
