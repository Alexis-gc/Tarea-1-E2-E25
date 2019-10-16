# include  <stdio.h>
# include  <stdbool.h>
# include  <stdlib.h>
# include  <conio.h>
int  main (void) {

    int num, pri, i, m, d;

    printf("Numero primo \n" );
    printf("Ingrese un número entero para determinar si es un número primo:");
    scanf("%d",&num);

    for (i=(num-1 );i>1;i--) {

        m = num% i;
        d = num/i;

        if (d> 0 && m == 0 ) {
            pri = 1 ;
        }
    }

    if (pri == 1 ) {
        printf(" \n \n El numero % d no es primo", num);
    }
    else {
        printf(" \n \n El numero % d es primo", num);
    }
}
