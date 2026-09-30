    #include <stdio.h>

    void main (){

    float nota;

    printf ("Insira uma nota entre 0 e 10\n");
    scanf ("%f" , &nota);

    while (nota < 0 || nota > 10) {

    printf ("Nota invalida! Insira uma nota entre 0 e 10\n");
    scanf ("%f" , &nota);}

    printf ("A nota %.2f foi aceita!\n" , nota);

}
