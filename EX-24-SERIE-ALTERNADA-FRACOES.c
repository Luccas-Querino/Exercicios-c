    #include <stdio.h>

    void main (){

    int numero, i;
    double soma;

    printf ("SERIE 1 - 1/2 + 1/3 - 1/4 + 1/5 ...\n");
    printf ("Insira o valor de N )\n");
    scanf ("%d" , &numero);

    if (numero > 0) {
    soma = 0;
    for (i = 1; i <= numero; i++) {
    if (i % 2 != 0){
    soma = soma + 1.0 / i;} else{
    soma = soma - 1.0 / i;}}

    printf ("O valor de S e %.6f\n" , soma);}
    else {
    printf ("Insira um numero inteiro positivo\n");}

}
