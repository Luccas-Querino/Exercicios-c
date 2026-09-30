    #include <stdio.h>

    void main (){

    int numero, i, resultado;

    printf ("TABUADA!\n");
    printf ("Insira o numero\n");
    scanf ("%d" , &numero);

    for (i = 1; i <= 10; i++) {
    resultado = numero * i;
    printf ("%d x %d = %d\n" , numero , i , resultado);}

}
