# include  <stdio.h>
# include  <stdbool.h>
# include  <stdlib.h>
# include  <conio.h>

int  main(void){

	int n, i, j;

	printf("intrudicir un numero entero:" );
	scanf( "%d", &n);

	for (i = 1 ; i <= n; i ++) {
		for (j = 1 ; j <= i; j ++) {
			printf ("%d", j);
		}
		printf ( " \n " );
	}
}
