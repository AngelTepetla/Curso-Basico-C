/**
 * MÓDULO 5 — RETO: Modificador de Contador
 * ==========================================
 * OBJETIVO: Usar punteros para modificar directamente una variable
 *           externa desde dentro de una función.
 *
 * ENUNCIADO:
 *   Escribir una función que reciba la dirección de memoria de una
 *   variable que representa el contador de ciclos de un electrodoméstico.
 *   La función debe incrementar el valor directamente en la memoria
 *   externa usando desreferencia de puntero.
 *
 * FIRMA ESPERADA:
 *   void contador_incrementar(uint32_t *p_contador);
 *
 * PASOS:
 *   1. Implementa la función contador_incrementar() que recibe un
 *      puntero a uint32_t y lo incrementa en 1 usando desreferencia (*p).
 *   2. En main(), declara la variable contador_ciclos = 0.
 *   3. Llama a la función pasando la dirección de la variable (&contador_ciclos).
 *   4. Imprime el valor antes y después de la llamada para verificar.
 *   5. BONUS: llama la función 5 veces en un for y muestra cada incremento.
 *
 * TIEMPO ESTIMADO: 10 minutos
 *
 * COMPILADOR:       1) onlinegdb.com
 * ALTERNATIVA:      2) programiz.com/c-programming/online-compiler
 *
 */

#include <stdint.h>
#include <stdio.h>

/* TODO 1: Implementa la función contador_incrementar().
 *         Recibe uint32_t *p_contador y lo incrementa en 1.
 */


int main(void) {

    uint32_t contador_ciclos = 0;

    printf("Valor inicial:  contador_ciclos = %lu\n", (unsigned long)contador_ciclos);

    /* TODO 3: Llama a contador_incrementar() pasando &contador_ciclos. */

    printf("Tras 1 llamada: contador_ciclos = %lu\n", (unsigned long)contador_ciclos);

    /* TODO 5 (BONUS): Llama la función 5 veces en un ciclo for. */
    printf("\n--- BONUS: 5 incrementos ---\n");
    for (/* TODO: i de 0 a 4 */) {
        contador_incrementar(&contador_ciclos);
        printf("  iteracion %d: contador_ciclos = %lu\n", /* i+1 */, (unsigned long)contador_ciclos);
    }


    return 0;
}
