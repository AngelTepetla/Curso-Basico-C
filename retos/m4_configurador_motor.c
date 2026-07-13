/**
 * MÓDULO 4 — RETO: Configurador de Periféricos
 * ==============================================
 * OBJETIVO: Crear una función que use un enum para configurar la
 *           velocidad de un motor y retornar código de éxito/error.
 *
 * ENUNCIADO:
 *   Crear una función encargada de cambiar la velocidad de un motor.
 *   La función debe recibir como argumento una enumeración (enum) con
 *   las velocidades permitidas (BAJA, MEDIA, ALTA) y retornar un código
 *   de éxito o error si el parámetro es inválido.
 *
 * FIRMA ESPERADA:
 *   int8_t motor_set_velocidad(VelocidadMotor_t vel);
 *     Retorna  0  → OK
 *     Retorna -1  → Parámetro inválido
 *
 * PASOS:
 *   1. Define el enum VelocidadMotor_t con valores BAJA, MEDIA, ALTA.
 *   2. Implementa motor_set_velocidad() usando un switch-case.
 *   3. En cada case, simula la acción con un printf (e.g. "Motor: BAJA velocidad").
 *   4. En el default, imprime el error y retorna -1.
 *   5. En main(), prueba la función con los tres valores válidos y uno inválido.
 *
 * TIEMPO ESTIMADO: 10 minutos
 *
 * COMPILADOR:       1) onlinegdb.com
 * ALTERNATIVA:      2) programiz.com/c-programming/online-compiler
 *
 */

#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>

/* TODO 1: Define el enum VelocidadMotor_t.
 *         typedef enum { BAJA, MEDIA, ALTA } VelocidadMotor_t;
 */


/* TODO 2: Implementa la función motor_set_velocidad().
 *         int8_t motor_set_velocidad(VelocidadMotor_t vel) { ... }
 *         Usa este switch-case con los printf ya listos:
 *
 *   switch(vel) {
 *       case BAJA:
 *           printf("[MOTOR] Velocidad: BAJA  (PWM ~30%%)\n");
 *           return 0;
 *       case MEDIA:
 *           printf("[MOTOR] Velocidad: MEDIA (PWM ~60%%)\n");
 *           return 0;
 *       case ALTA:
 *           printf("[MOTOR] Velocidad: ALTA  (PWM ~100%%)\n");
 *           return 0;
 *       default:
 *           printf("[MOTOR] ERROR: velocidad invalida (%d)\n", (int)vel);
 *           return -1;
 *   }
 */


int main(void) {

    /* TODO 3: Prueba la función con BAJA, MEDIA, ALTA y un valor inválido.
     *         Usa este bloque con los printf ya listos:
     */
    int8_t resultado;

    resultado = motor_set_velocidad(BAJA);
    printf("  retorno = %d\n", resultado);

    resultado = motor_set_velocidad(MEDIA);
    printf("  retorno = %d\n", resultado);

    resultado = motor_set_velocidad(ALTA);
    printf("  retorno = %d\n", resultado);

    resultado = motor_set_velocidad(99);   /* valor inválido */
    printf("  retorno = %d\n", resultado);

    return 0;
}
