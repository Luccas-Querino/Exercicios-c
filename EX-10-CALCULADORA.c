    #include <stdio.h>

    void main (){

    float numero1, numero2, resultado;
    char operador;

    printf ("CALCULADORA SIMPLES!\n");
    printf ("Insira o primeiro numero\n");
    scanf ("%f" , &numero1);

    printf ("Insira o operador ( + - * / )\n");
    scanf (" %c" , &operador);

    printf ("Insira o segundo numero\n");
    scanf ("%f" , &numero2);

    if (operador == '+') {
    resultado = numero1 + numero2;
    printf ("%.2f + %.2f = %.2f\n" , numero1 , numero2 , resultado);

    } else if (operador == '-') {
    resultado = numero1 - numero2;
    printf ("%.2f - %.2f = %.2f\n" , numero1 , numero2 , resultado);

    } else if (operador == '*') {
    resultado = numero1 * numero2;
    printf ("%.2f * %.2f = %.2f\n" , numero1 , numero2 , resultado);

    } else if (operador == '/') {
    if (numero2 == 0)
    {
    printf ("Erro: nao existe divisao por zero!\n");
    } else {
    resultado = numero1 / numero2;
    printf ("%.2f / %.2f = %.2f\n" , numero1 , numero2 , resultado);
    }}
    else {
    printf ("Operador invalido\n");
    }}
