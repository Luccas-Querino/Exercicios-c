    #include <stdio.h>

    void main (){

    int numero, n;
    double fatorial, soma;

    printf ("APROXIMACAO DO NUMERO DE EULER (e)!\n");
    printf ("Insira o valor de N (inteiro nao negativo)\n");
    scanf ("%d" , &numero);

    if (numero < 0) {
    printf ("Insira um numero inteiro nao negativo\n");}

    else {fatorial = 1;
    soma = 1;
    for (n = 1; n <= numero; n++) {
    fatorial = fatorial * n;
    soma = soma + 1 / fatorial;}

    printf ("A aproximacao de e com N = %d e %.10f\n" , numero , soma);}


}
