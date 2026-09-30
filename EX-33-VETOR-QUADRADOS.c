    #include <stdio.h>

    void main (){


    int numeros[100];
    int quadrados[100];
    int quantidade, i;

    printf ("VETOR DE QUADRADOS!\n");

    printf ("Quantos numeros deseja inserir? (de 1 a 100)\n");
    scanf ("%d" , &quantidade);

    while (quantidade < 1 || quantidade > 100) {
    printf ("Valor invalido! Insira um valor de 1 a 100\n");
    canf ("%d" , &quantidade);}

    for (i = 0; i < quantidade; i++) {

    printf ("Insira o numero %d\n" , i + 1);
    scanf ("%d" , &numeros[i]);

    quadrados[i] = numeros[i] * numeros[i];}

    printf ("Vetor A:\n");

    for (i = 0; i < quantidade; i++) {
    printf ("%d " , numeros[i]);}
    printf ("\nVetor B (quadrados):\n");

    for (i = 0; i < quantidade; i++) {
    printf ("%d " , quadrados[i]);}
    printf ("\n");



}
