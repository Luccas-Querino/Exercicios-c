    #include <stdio.h>

    void main (){

    char escolha;
    int numero, quadrado, cubo, i;
    double fatorial;

    do {

    printf ("MENU\n");
    printf ("Para calcular o quadrado, digite 1\n");
    printf ("Para calcular o cubo, digite 2\n");
    printf ("Para calcular o fatorial, digite 3\n");
    printf ("Para sair, digite 4\n");
    scanf (" %c" , &escolha);

    if (escolha == '1') {

    printf ("Insira o numero\n");
    scanf ("%d" , &numero);

    quadrado = numero * numero;
    printf ("O quadrado de %d e %d\n" , numero , quadrado);}

    else if (escolha == '2') {
    printf ("Insira o numero\n");
    scanf ("%d" , &numero);

    cubo = numero * numero * numero;
    printf ("O cubo de %d e %d\n" , numero , cubo);}

    else if (escolha == '3') {
    printf ("Insira o numero\n");
    scanf ("%d" , &numero);

    if (numero < 0) {
    printf ("Insira um numero inteiro nao negativo\n");}

    else {
    fatorial = 1;

    for (i = 1; i <= numero; i++) {
    fatorial = fatorial * i;}

    printf ("O fatorial de %d e %.0f\n" , numero , fatorial);}}

    else if (escolha == '4') {
    printf ("Saindo do programa...\n");}
    else {
    printf ("Insira uma opcao valida\n");}}

    while (escolha != '4');








}
