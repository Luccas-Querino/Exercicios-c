    #include <stdio.h>

    void main (){

    float numeros[100];
    float maior, menor;
    int quantidade, i, posicaoMaior, posicaoMenor;

    printf ("MAIOR E MENOR ELEMENTO DE UM VETOR!\n");
    printf ("Quantos numeros deseja inserir? (de 1 a 100)\n");
    scanf ("%d" , &quantidade);

    while (quantidade < 1 || quantidade > 100) {
    printf ("Valor invalido! Insira um valor de 1 a 100\n");
    scanf ("%d" , &quantidade);}

    for (i = 0; i < quantidade; i++) {
    printf ("Insira o numero %d\n" , i + 1);
    scanf ("%f" , &numeros[i]);}

    maior = numeros[0];

    menor = numeros[0];

    posicaoMaior = 0;

    posicaoMenor = 0;

    for (i = 1; i < quantidade; i++) {

    if (numeros[i] > maior) {

    maior = numeros[i];
    posicaoMaior = i;}

    if (numeros[i] < menor) {
    menor = numeros[i];
    posicaoMenor = i;}}

    printf ("O maior elemento e %.2f, na posicao %d\n" , maior , posicaoMaior);
    printf ("O menor elemento e %.2f, na posicao %d\n" , menor , posicaoMenor);








}
