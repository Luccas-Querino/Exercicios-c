    #include <stdio.h>

    void main (){

    int termos;
    double soma;

    soma = 0;
    termos = 0;

    while (soma < 10) {

    termos = termos + 1;
    soma = soma + 1.0 / termos;}

    printf ("Foram utilizados %d termos\n" , termos);
    printf ("O valor final da soma e %.6f\n" , soma);

}
