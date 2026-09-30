    #include <stdio.h>

    void main (){
    int numero, i, soma;

    printf ("SERIE DOS NUMEROS NATURAIS!\n");
    printf ("Insira o valor de N (inteiro positivo)\n");
    scanf ("%d" , &numero);

    if (numero > 0) {
    soma = 0;
    for (i = 1; i <= numero; i++) {
    printf ("%d" , i);
    if (i < numero)
    {
    printf (" + ");}
    soma = soma + i;}

    printf (" = %d\n" , soma);}
    else {
    printf ("Insira um numero inteiro positivo\n");}





}
