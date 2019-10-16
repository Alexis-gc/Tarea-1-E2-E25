# include  <stdio.h>
# include  <stdbool.h>
# include  <stdlib.h>
# include  <conio.h>


int  main(void){

int a;
float p,e,cm, c =0.9 , por=0.1;

printf ("Calculadora de peso recomendado\n");
printf ("Ingrese su edad en anos:" );
scanf ("%d",&a);
printf ("\n Ingrese su estatura en metros:");
scanf ("%f",&e);

cm = e*100;

p =((cm-100)+(a*por))*c;

printf ( "\n \n El peso recomendado de acuerdo a su edad y estatura es: % .3f ",p);
}
