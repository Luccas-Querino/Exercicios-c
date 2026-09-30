    #include <stdio.h>

    void main (){

    int numero, soma, quantidade;
    float media;

    soma = 0;
    quantidade = 0;

    printf ("Insira numeros inteiros ate que a soma chegue a 100\n");

    while (soma < 100) {
    printf ("Insira um numero\n");
    scanf ("%d" , &numero);

    soma = soma + numero;
    quantidade = quantidade + 1;}

    media = soma;
    media = media / quantidade;

    printf ("Quantidade de numeros digitados: %d\n" , quantidade);
    printf ("Soma: %d\n" , soma);
    printf ("Media: %.2f\n" , media);

}
