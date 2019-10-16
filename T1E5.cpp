# include  <stdio.h>
# include  <stdbool.h>
# include  <stdlib.h>
# include  <conio.h>
#
int  main(void){
int a,b;

printf ("Numero par o impar \n" );
printf ("Ingrese un numero entero:" );
scanf ("%d",&a);

b = a%2;

if(b==0) {

    printf("\n \n El número introducido es par \n \n");
}
else{

    printf ("\n \n El número introducido es impar \n \n");
}
}
