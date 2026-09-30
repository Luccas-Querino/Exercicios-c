    #include <stdio.h>
    void main (){
    float F,C, c1,c2,f1,f2;
    char escolha;

     do {
    printf ("MENU\n");
    printf ("Fahrenheit para Celcius digite 1\n");
    printf ("Celcius para Fahrenheit digite 2\n");
    printf("Sair, digite 0\n");
    scanf (" %c" , &escolha);

    if (escolha =='1') {
            printf ("Insira a temperatura em FAHRENHEIT.\n");
    scanf ("%f" , &F);

    c1= F-32;
    c2= 5 * c1;
    C= c2/9;

    printf (" A temperatura %.2fF convertida e de %.2fC\n" , F, C);

    } else if (escolha =='2'){
     printf ("Insira a temperatura em CELSIUS.\n");
    scanf ("%f" , &C);

    f1 = 9*C;
    f2 = f1/5;
    F = f2+32;

    printf (" A temperatura %.2fC convertida e de %.2fF\n" , C, F);}
    else if (escolha == '0') {
            printf("Saindo do programa...\n");
    }
     else { printf ("Insira um numero valido\n");}
    } while (escolha != '0');





    }
