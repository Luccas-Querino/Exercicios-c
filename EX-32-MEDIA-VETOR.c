    #include <stdio.h>

    void main (){

    float numeros[100];
    float soma, media;
    int quantidade, i, acimaDaMedia;

    printf ("MEDIA E QUANTIDADE ACIMA DA MEDIA!\n");
    printf ("Quantos numeros deseja inserir? (de 1 a 100)\n");
    scanf ("%d" , &quantidade);

    while (quantidade < 1 || quantidade > 100) {

    printf ("Valor invalido! Insira um valor de 1 a 100\n");
    scanf ("%d" , &quantidade);}

    soma = 0;
    for (i = 0; i < quantidade; i++) {

    printf ("Insira o numero %d\n" , i + 1);
    scanf ("%f" , &numeros[i]);

    soma = soma + numeros[i];}

    media = soma / quantidade;

    acimaDaMedia = 0;

    for (i = 0; i < quantidade; i++) {
    if (numeros[i] > media) {

    acimaDaMedia = acimaDaMedia + 1;}}

    printf ("A media dos numeros e %.2f\n" , media);
    printf ("Existem %d elementos maiores que a media\n" , acimaDaMedia);








}
