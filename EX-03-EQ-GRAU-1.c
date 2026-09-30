#include <stdio.h>
	void main (){
	float a,b,x;

	printf ("Vamos descobrir o valor de X na equacao a*x + b = 0!\n");

	printf ("Para descobrir o valor de X, insira o valor de A\n");
	scanf ("%f" , &a);

	printf (" insira o valor de B\n");
	scanf ("%f", &b);

	x = -b/a;


		if (a == 0){
		printf (" Erro na operacao. Esse calculo nao pode ser definido.\n ");
		}
		 else { printf ( "O valor de X para essa equacao e de: %f" , x	);
		}

	}
