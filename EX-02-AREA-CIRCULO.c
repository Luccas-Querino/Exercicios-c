#include <stdio.h>
	 void main (){
 	float pi, raio, raio2, area;
 	pi = 3.14159;



    printf ("Digite o raio do circulo para calcular a area\n");
    scanf ("%f", &raio);

    raio2 = raio*raio;

 	area = pi*raio2;

 	printf ("A area do circulo de raio %f tem %f centimetros quadrados\n" , raio, area);

}
