# include  <stdio.h>
# include  <stdbool.h>
# include  <stdlib.h>
# include  <conio.h>

int  main(void){
float r,a,p,pi=3.1416;

printf("Calculadora de �rea y per�metro de circunferencias \n \n");
printf("Ingrese el radio de la circunferencia:");
scanf("%f",&r);

a = pi * pow (r,2);
p=2*pi*r;

printf(" \n \n El �rea de la circunferencia es: % .3f ",a);
printf(" \n El per�metro de la circunferencia es: % .3f \n \n",p);

}
