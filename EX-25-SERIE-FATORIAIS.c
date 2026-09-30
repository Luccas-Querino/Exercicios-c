    #include <stdio.h>

    void main (){

    int numero, i;
    double fatorial, soma;

    printf ("SERIE 1/1! + 2/2! + 3/3! + ... + N/N!\n");
    printf ("Insira o valor de N\n");
    scanf ("%d" , &numero);

    if (numero > 0) {
    fatorial = 1;
    soma = 0;
    for (i = 1; i <= numero; i++) {
    fatorial = fatorial * i;
    soma = soma + i / fatorial;}

    printf ("O valor de S e %.10f\n" , soma);} else {
    printf ("Insira um numero inteiro positivo\n");}







}
