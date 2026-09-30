    #include <stdio.h>

    void main (){

    double fatoriais[20];
    double soma;
    int numero, i;

    printf ("VETOR DE FATORIAIS!\n");
    printf ("Insira o valor de N (de 1 a 20)\n");
    scanf ("%d" , &numero);

    while (numero < 1 || numero > 20){
    printf ("Valor invalido! Insira um valor de 1 a 20\n");
    scanf ("%d" , &numero);}

    fatoriais[0] = 1;
    for (i = 1; i < numero; i++) {
    fatoriais[i] = fatoriais[i - 1] * (i + 1);}

    soma = 0;
    printf ("Fatoriais armazenados:\n");
    for (i = 0; i < numero; i++) {
    printf ("%d! = %.0f\n" , i + 1 , fatoriais[i]);
    soma = soma + fatoriais[i];}

    printf ("A soma dos fatoriais e %.0f\n" , soma);







}
