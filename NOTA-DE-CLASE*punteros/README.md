# Notas: PUNTEROS
## Descripción
Programa que ejemplifica el paso de parámetros por valor y por referencia usando punteros. La función `f_doble` recibe una copia de la variable y no modifica la original, mientras que `f_triple` recibe la dirección de memoria y altera el valor original. Además, contiene un ejemplo comentado sobre punteros y uso de `malloc` para asignación dinámica.
## Temas aplicados
- punteros y direcciones de memoria
- paso de parámetros por valor y por referencia
- operador de desreferencia (*)
- función malloc para memoria dinámica
- diferencia entre variable local y modificaciones a través de punteros
## Compilación
gcc dir-memoria.c -o dir-memoria
## Ejecución
./dir-memoria