    #include <stdio.h>

    void main (){

    double termos[100];
    double soma, media, maior;
    int numero, i;

    printf ("SERIE ARMAZENADA EM VETOR: 1, 1/2, 1/3, ... 1/N\n");
    printf ("Insira o valor de N (de 1 a 100)\n");
    scanf ("%d" , &numero);

    while (numero < 1 || numero > 100) {
    printf ("Valor invalido! Insira um valor de 1 a 100\n");
    scanf ("%d" , &numero);}

    for (i = 0; i < numero; i++) {
    termos[i] = 1.0 / (i + 1);}

    printf ("Elementos do vetor:\n");

    for (i = 0; i < numero; i++) {
    printf ("%.4f\n" , termos[i]);}

    soma = 0;
    maior = termos[0];

    for (i = 0; i < numero; i++) {
    soma = soma + termos[i];
    if (termos[i] > maior) {

    maior = termos[i];}}
    media = soma / numero;

    printf ("A soma dos termos e %.6f\n" , soma);
    printf ("A media dos termos e %.6f\n" , media);
    printf ("O maior termo e %.6f\n" , maior);

}
