    #include <stdio.h>

    void main (){

    int numero, i;
    double fatorial, soma;

    printf ("SOMA DOS FATORIAIS!\n");
    printf ("Insira o valor de N (inteiro positivo)\n");
    scanf ("%d" , &numero);

    if (numero > 0) {
    fatorial = 1;
    soma = 0;

    for (i = 1; i <= numero; i++) {
    fatorial = fatorial * i;
    soma = soma + fatorial;}

    printf ("A soma dos fatoriais de 1! ate %d! e %.0f\n" , numero , soma);}
    else {
    printf ("Insira um numero inteiro positivo\n");}

}

