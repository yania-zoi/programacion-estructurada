#include <stdio.h>

void capturar(int (*v)[6]){
    for (int i = 0; i < 6; i++){
        scanf("%d", &(*v)[i]);
    }
}

void mostrar(int v[], int n){
    for(int i = 0; i < n; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
}

int filtrar(int origen[], int destino[], int n){
    int n_impares = 0;

    for(int i = 0; i < n; i++){
        if(origen[i] % 2 != 0){
            destino[n_impares] = origen[i];
            n_impares++;
        }
    }

    return n_impares;
}

void guardarArchivo(int v[], int n){
    FILE *f;
    f = fopen("resultado.txt", "w");

    if(f == NULL){
        printf("Error al abrir el archivo\n");
        return;
    }

    for(int i = 0; i < n; i++){
        fprintf(f, "%d ", v[i]);
    }

    fclose(f);
}

int main() {
    int nums[6];
    int impares[6];
    int cantidad;

    printf("Ingrese 6 números:\n");
    capturar(&nums);

    printf("Arreglo original:\n");
    mostrar(nums, 6);

    // Filtrar
    cantidad = filtrar(nums, impares, 6);

    printf("Arreglo filtrado (impares):\n");
    mostrar(impares, cantidad);

    printf("Cantidad de números impares: %d\n", cantidad);

    // Guardar en archivo
    guardarArchivo(impares, cantidad);

    return 0;
}