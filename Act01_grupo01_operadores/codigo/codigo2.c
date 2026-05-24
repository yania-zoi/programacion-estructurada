#include <stdio.h>
int main(){
    int x = 5, y=3;
    //se añadió identación al código
    if (x>y){ //código previo no contaba con llaves de inicio y fin de la función selectiva
        printf("%d es mayor\n", x); // se añadió espacio inferior al texto del print
        //la impresión no contaba con la %d el dato ni contactaba a la variable
    }
    else {
        printf("%d es mayor\n", y);
    } //código previo no contaba con llaves de inicio y fin de la función selectiva

    printf("fin"); /*se realizó un cambio en el posicionamiento del fin ya que tiene
    más sentido que se ejecut luego de la selectiva*/
return 0;}