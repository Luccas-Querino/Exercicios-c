    #include <stdio.h>

    void main (){

    int numero, i, soma, formula;

    printf ("SERIE DOS NUMEROS IMPARES!\n");
    printf ("Insira o valor de N (inteiro positivo)\n");
    scanf ("%d" , &numero);

    if (numero > 0) {
    soma = 0;
    for (i = 1; i <= numero; i++) {
            printf ("%d" , 2 * i - 1);
    if (i < numero) {
    printf (" + ");}

    soma = soma + (2 * i - 1);}
    printf (" = %d\n" , soma);

    formula = numero * numero;
    printf ("Resultado usando a formula N ao quadrado: %d\n" , formula);

    if (soma == formula) {
    printf ("Os resultados sao iguais!\n");}
    else {
    printf ("Os resultados sao diferentes\n");}}
    else {

    printf ("Insira um numero inteiro positivo\n");}

}
