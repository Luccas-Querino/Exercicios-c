    #include <stdio.h>

    void main (){

    int fibonacci[40];
    int numero, i, soma;

    printf ("VETOR DE FIBONACCI!\n");
    printf ("Insira o valor de N (de 1 a 40)\n");
    scanf ("%d" , &numero);

    while (numero < 1 || numero > 40) {
    printf ("Valor invalido! Insira um valor de 1 a 40\n");
    scanf ("%d" , &numero);}

    fibonacci[0] = 0;
    if (numero > 1) {
    fibonacci[1] = 1;}

    for (i = 2; i < numero; i++) {
    fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];}

    soma = 0;
    printf ("Sequencia de Fibonacci:\n");
    for (i = 0; i < numero; i++) {
    printf ("%d " , fibonacci[i]);
    soma = soma + fibonacci[i];}

    printf ("\nA soma dos elementos e %d\n" , soma);





}
