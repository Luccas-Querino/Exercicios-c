    #include <stdio.h>

    void main (){

    int numero, i;
    double fatorial;

    printf ("FATORIAL DE UM NUMERO!\n");
    printf ("Insira o numero (inteiro nao negativo)\n");
    scanf ("%d" , &numero);

    if (numero < 0) {
    printf ("Insira um numero inteiro nao negativo\n");}
    else {
    fatorial = 1;
    for (i = 1; i <= numero; i++) {
    fatorial = fatorial * i;}
    printf ("O fatorial de %d e %.0f\n" , numero , fatorial);}



    }
