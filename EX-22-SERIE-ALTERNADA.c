    #include <stdio.h>

    void main (){
    int numero, i, soma;

    printf ("SERIE ALTERNADA: 1 - 2 + 3 - 4 + 5 - 6 ...\n");
    printf ("Insira o valor de N (inteiro positivo)\n");
    scanf ("%d" , &numero);

    if (numero > 0) {
    soma = 0;
    for (i = 1; i <= numero; i++) {
    if (i % 2 != 0) {

    soma = soma + i;} else {
    soma = soma - i;}}

    printf ("O valor de S e %d\n" , soma);} else
    {printf ("Insira um numero inteiro positivo\n");}

}
