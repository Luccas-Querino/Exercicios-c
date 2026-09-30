    #include <stdio.h>

    void main (){
    int numero, i;

    printf ("CONTAGEM DE 1 ATE N!\n");
    printf ("Insira o valor de N (inteiro positivo)\n");
    scanf ("%d" , &numero);

    if (numero > 0) {
    for (i = 1; i <= numero; i++) {

    printf ("%d\n" , i);

    }}
    else {
    printf ("Insira um numero inteiro positivo\n");
    }




}
