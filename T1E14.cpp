# include  <stdio.h>
# include  <stdbool.h>
# include  <stdlib.h>
# include  <conio.h>
int  main (void){

    char l;

    printf ("Vocal o Consonante? \n " );
    printf ("Introducir una letra mayúscula o minuscula: " );
    l = getch ();

    if (l == ' a ' || l == ' A ' || l == ' e ' || l == ' E ' || l == ' i ' || l == ' I ' || l == ' o ' || l == ' O ' || l == ' u ' || l == ' U ' ) {
        printf ( " \n \n La letra % c es vocal \n " , l);
    }
    else {
        printf ( " \n \n La letra % c es consonante \n " , l);
    }

}
