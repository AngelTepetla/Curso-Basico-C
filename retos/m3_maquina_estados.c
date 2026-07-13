/**
 * MÓDULO 3 — RETO: Main Loop y Máquina de Estados
 * =================================================
 * OBJETIVO: Implementar un bucle principal con switch-case para
 *           controlar los estados de un aparato embebido.
 *
 * ENUNCIADO:
 *   Implementa un bucle principal while(1) simulado. Dentro de él,
 *   coloca un switch-case que controle los estados de un aparato
 *   (REPOSO, TRABAJO, FALLA). Usa un contador con un ciclo for para
 *   simular el paso del tiempo y cambiar de estado.
 *
 * FLUJO ESPERADO:
 *   REPOSO  →  (después de N ciclos)  →  TRABAJO
 *   TRABAJO →  (después de N ciclos)  →  FALLA
 *   FALLA   →  programa termina (break del while)
 *
 * PASOS:
 *   1. Define un enum con los estados: REPOSO, TRABAJO, FALLA.
 *   2. Declara una variable de estado e inicialízala en REPOSO.
 *   3. Implementa el while(1) con switch-case para cada estado.
 *   4. Dentro de cada case usa un for para simular tiempo (e.g. 3 ciclos).
 *   5. Cambia de estado al terminar los ciclos e imprime transiciones.
 *
 * TIEMPO ESTIMADO: 10 minutos
 *
 * COMPILADOR:       1) onlinegdb.com
 * ALTERNATIVA:      2) programiz.com/c-programming/online-compiler
 *
 */

#include <stdint.h>
#include <stdio.h>

/* TODO 1: Define el enum con los estados del aparato.
 *         typedef enum { ... } EstadoAparato_t;
 */


int main(void) {

    /* TODO 2: Declara una variable de tipo EstadoAparato_t e
     *         inicialízala en REPOSO.
     */


    /* TODO 3: Implementa el bucle while(1).
     *         Dentro, coloca el switch-case para manejar cada estado.
     *         Usa un for interno para simular el paso del tiempo.
     *         Recuerda agregar un break para salir del while en FALLA.
     */
    while(1) {
        switch(estado) {
            case REPOSO:
                printf("[REPOSO]  Aparato en espera...\n");
                for (/* TODO: 3 ciclos */) {
                    printf("          ciclo %d\n", /* índice */);
                }
                printf("          → Transicion a TRABAJO\n");
                estado = TRABAJO;
                break;

            case TRABAJO:
                printf("[TRABAJO] Aparato operando...\n");
                for (/* TODO: 3 ciclos */) {
                    printf("          ciclo %d\n", /* índice */);
                }
                printf("          → Transicion a FALLA\n");
                estado = FALLA;
                break;

            case FALLA:
                printf("[FALLA]   Error detectado. Deteniendo sistema.\n");
                goto fin;   /* salir del while */

            default:
                printf("[ERROR]   Estado desconocido.\n");
                goto fin;
        }
    }
    fin:

    printf("Sistema detenido.\n");
    return 0;
}
