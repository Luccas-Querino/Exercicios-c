#include <stdio.h>
    void main (){
    float celcius, fahrenheit, c1, c2, f1,f2;

    printf ("Insira a temperatura em Celcius:\n");
    scanf ("%f", &celcius);

    c1 = 9*celcius;
    c2 = c1/5;
    fahrenheit = c2 + 32;

    printf ("A temperatura e de %.2f fahrenheit\n", fahrenheit);

    printf ("insira a temperatura em fahrenheit\n");
    scanf ("%f" , &fahrenheit);

    f1 = fahrenheit - 32;
    f2 = 5 * f1;
    celcius = f2/9;

    printf ("A temperatura e de %.2f Celcius." , celcius);

    }
