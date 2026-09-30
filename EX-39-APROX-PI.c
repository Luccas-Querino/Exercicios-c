    #include <stdio.h>

    void main (){

    double termos[10000];
    double soma, pi, diferenca;
    int numero, i;

    printf ("APROXIMACAO DE PI (SERIE DE LEIBNIZ)!\n");

    do {

    printf ("Insira o valor de N (de 1 a 10000)\n");
    scanf ("%d" , &numero);

    if (numero < 1 || numero > 10000) {
    printf ("Valor invalido!\n");}}
    while (numero < 1 || numero > 10000);
    soma = 0;

    for (i = 0; i < numero; i++) {
    if (i % 2 == 0){
    termos[i] = 1.0 / (2 * i + 1);}

    else {termos[i] = -1.0 / (2 * i + 1

    soma = soma + termos[i];}

    pi = 4 * soma;

    diferenca = pi - 3.141592653589793;
    if (diferenca < 0) {
    diferenca = -diferenca;}

    printf ("Aproximacao de pi com %d termos: %.15f\n" , numero , pi);
    printf ("Valor de referencia:            3.141592653589793\n");
    printf ("Diferenca: %.15f\n" , diferenca);








}
