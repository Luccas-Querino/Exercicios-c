    #include <stdio.h>

    void main (){

    int numeros[100];
    int quantidade, i, soma;

    printf ("LEITURA E SOMA DE UM VETOR!\n");
    printf ("Quantos numeros deseja inserir? (de 1 a 100)\n");
    scanf ("%d" , &quantidade);

    while (quantidade < 1 || quantidade > 100) {

    printf ("Valor invalido! Insira um valor de 1 a 100\n");
    scanf ("%d" , &quantidade);}

    soma = 0;
    for (i = 0; i < quantidade; i++) {
    printf ("Insira o numero %d\n" , i + 1);
    scanf ("%d" , &numeros[i]);
    soma = soma + numeros[i];}

    printf ("Elementos do vetor:\n");
    for (i = 0; i < quantidade; i++) {
    printf ("%d " , numeros[i]);}

    printf ("\nA soma dos elementos e %d\n" , soma);





}
