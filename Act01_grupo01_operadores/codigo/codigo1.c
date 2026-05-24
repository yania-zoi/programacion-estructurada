#include <stdio.h>
int main(){
    int a = 3;
    int b = 4;
    int c = a++ + --b;
        printf("%d%d%d\n", a, b, c); //en el segundo uso de a el valor aumenta
    ////////
        int x = 10;
    int y = 3;
        printf("%d\n", x + y * 2);
        printf("%d\n", (x + y) * 2); /*en jerarquia de operaciones se resuelven primero
        parentesis*/
    //////
    int i = 5;
        printf("%d\n", i++); // i aumenta a 6 luego de usar
        printf("%d\n", ++i); //el 6 anterior aumenta a 7 antes de usar y asi se imprime
    ///////////
    int e = 5, f = 2;
    float r = e / f;
    printf("%.2f\n", r); //esta operando con enteros por eso obvia el res decimal, aunque no el.2
return 0;}