#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    struct timespec start, end;
    double elapsed;
    
    // Obtiene la marca de tiempo inicial
    clock_gettime(CLOCK_MONOTONIC, &start);
    
    // Hace algo que lleva tiempo
    int sum = 0;
    for (int i = 0; i < 100000000; i++) {
        sum += i;
    }
    
    // Obtiene la marca de tiempo final
    clock_gettime(CLOCK_MONOTONIC, &end);
    
    // Calcula el tiempo transcurrido
    elapsed = (end.tv_sec - start.tv_sec) + (end.tv_nsec - start.tv_nsec) / 1e9;
    
    // Imprime el tiempo transcurrido
    printf("Elapsed time: %.9f seconds\n", elapsed);
    
    return 0;
}