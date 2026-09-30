    #include <stdio.h>

    void main (){

    float a, b, c, delta, raiz, x, x1, x2;
    int i;

    printf ("EQUACAO DO SEGUNDO GRAU!\n");
    printf ("Insira o valor de A\n");
    scanf ("%f" , &a);

    printf ("Insira o valor de B\n");
    scanf ("%f" , &b);

    printf ("Insira o valor de C\n");
    scanf ("%f" , &c);

    if (a == 0) {
    printf ("Como A e zero, a equacao vira do primeiro grau: bx + c = 0\n");

    if (b != 0) {
    x = -c / b;

    printf ("O valor de x e %.2f\n" , x);
        } else if (c == 0) {
    printf ("Qualquer numero real e solucao (0 = 0)\n");
        } else {
    printf ("A equacao nao tem solucao\n");
        }

    } else {
    delta = b * b - 4 * a * c;
    printf ("O discriminante (delta) e %.2f\n" , delta);

    if (delta < 0) {
    printf ("A equacao nao possui raizes reais\n");

    }
    else if (delta == 0) {
    x1 = -b / (2 * a);
    printf ("A equacao possui uma raiz real: x = %.2f\n" , x1);

        } else {
    raiz = delta;
    for (i = 0; i < 100; i++) {
    raiz = (raiz + delta / raiz) / 2;
            }

    x1 = (-b + raiz) / (2 * a);
    x2 = (-b - raiz) / (2 * a);

    printf ("A equacao possui duas raizes reais:\n");
    printf ("x1 = %.2f\n" , x1);
    printf ("x2 = %.2f\n" , x2);
    }
    }
    }
