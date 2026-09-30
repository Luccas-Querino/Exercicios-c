    #include <stdio.h>

    void main (){

    int numero, i, somaFor, formula;

    printf ("SOMA DOS PRIMEIROS N NUMEROS NATURAIS!\n");
    printf ("Insira o valor de N (inteiro positivo)\n");
    scanf ("%d" , &numero);

    if (numero > 0) {
    somaFor = 0;
    for (i = 1; i <= numero; i++) {
    somaFor = somaFor + i;
    }

    formula = numero * (numero + 1) / 2;

    printf ("Soma usando o for: %d\n" , somaFor);
    printf ("Soma usando a formula: %d\n" , formula);

    if (somaFor == formula) {
    printf ("Os resultados sao iguais!\n");
    }
    else {
    printf ("Os resultados sao diferentes\n");
    }}
    else {
    printf ("Insira um numero inteiro positivo\n");


    }

}
