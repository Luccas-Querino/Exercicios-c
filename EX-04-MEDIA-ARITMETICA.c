#include <stdio.h>
	void main (){
	float n1, n2, n3, media, soma;

	printf ("Bem vindo! Esse programa calcula a media aritmética de tres notas.\n");

	printf ("Para comecar, digite o valor para nota 1\n");
	scanf ("%f", &n1);

	printf ("Digite o valor para nota 2\n");
	scanf ("%f", &n2);

	printf ("Digite o valor para nota 3\n");
	scanf ("%f", &n3);

	soma = n1+n2+n3;
	media = soma/3;

	if (media >= 6){
	printf (" Parabens! sua media final e %.2f voce foi aprovado!\n" , media );
	}
	 else if (media >= 4){
	 printf ("Sua media final e de %.2f, Comparecer a IFA.\n" , media);
	}
	 else {
	printf ("Sua media final e de %.2f. voce foi reprovado.\n" , media);
	}


	}
