# include<stdio.h>
# include<stdlib.h>
# include<conio.h>

int  main(void){

    int seg, min, hr, i, s;

    printf("Convertidor de segundos a horas, minutos y segundos \n" );
    printf("Introducir un valor en segundos:" );
    scanf("%i",&s);

    hr =s/3600;
    min =(s%3600)/60;
    seg =(s%3600)%60;

    printf("%Si es equivalente a %i hrs, %i min, %i seg \n \n",s,hr,min,seg);
}
