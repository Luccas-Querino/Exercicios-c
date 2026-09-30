    #include <stdio.h>
    void main (){
    int x;

    printf ("CLASSIFICACAO DE NUMEROS!\n");
    printf ("Insira o numero\n");
    scanf ("%d" , &x);

    if (x >=0 && x % 2 == 0) { printf (" o numero %d e par e positivo!\n" ,x);}

    else if (x < 0 && x % 2 == 0) { printf (" o numero %d e par e negativo!\n" , x);}

    else if (x >=0 && x % 2 != 0) { printf (" o numero %d e impar e positivo!\n" ,x);}
    if (x < 0 && x % 2 != 0) { printf (" o numero %d e impar e negativo!\n" , x);}





    }


