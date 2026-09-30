    #include <stdio.h>

    void main (){

    int numeros[100];
    int quantidade, i, somaPares, quantidadePares;

    printf ("SOMA DOS ELEMENTOS PARES!\n");
    printf ("Quantos numeros deseja inserir? (de 1 a 100)\n");
    scanf ("%d" , &quantidade);

    while (quantidade < 1 || quantidade > 100) {
    printf ("Valor invalido! Insira um valor de 1 a 100\n");
    scanf ("%d" , &quantidade);}

    somaPares = 0;
    quantidadePares = 0;

    for (i = 0; i < quantidade; i++) {
    printf ("Insira o numero %d\n" , i + 1);
    scanf ("%d" , &numeros[i]);

    if (numeros[i] % 2 == 0) {
    somaPares = somaPares + numeros[i];
    quantidadePares = quantidadePares + 1;}}

    printf ("A soma dos elementos pares e %d\n" , somaPares);
    printf ("Existem %d elementos pares no vetor\n" , quantidadePares);

}
