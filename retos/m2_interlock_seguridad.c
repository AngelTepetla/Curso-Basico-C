/**
 * MÓDULO 2 — RETO: Validación de Enclavamiento (Interlock)
 * ==========================================================
 * OBJETIVO: Verificar tres condiciones de seguridad usando operadores
 *           lógicos Y operadores de bits sobre un registro simulado.
 *
 * ENUNCIADO:
 *   Escribe un condicional if que verifique tres condiciones de seguridad
 *   simultáneas usando operadores lógicos. Luego, usa operadores de bits
 *   para leer un estado específico dentro de un registro simulado.
 *
 * REGISTRO DE ESTADO (uint8_t): 0b10100101
 *   Bit 0 → PUERTA_CERRADA
 *   Bit 3 → NIVEL_AGUA_OK
 *   Bit 5 → TEMPERATURA_OK
 *
 * PASOS:
 *   1. Define las máscaras de bits para cada condición (#define o constante).
 *   2. Usa operadores de bits (&) para extraer cada condición del registro.
 *   3. Escribe un if con && que verifique las 3 condiciones simultáneamente.
 *   4. Imprime si el sistema puede arrancar o no.
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

/* Registro de estado simulado — NO modificar */
static uint8_t registro_estado = 0b10100101;

/* TODO 1: Define las máscaras de bits para cada condición.
 *         Ejemplo: #define MASK_PUERTA_CERRADA  (1U << 0)
 */


int main(void) {

    /* TODO 2: Extrae cada condición del registro usando el operador &.
     *         Guarda cada resultado en una variable bool o uint8_t.
     */

    printf("registro_estado = 0x%02X\n", registro_estado);
    printf("  Puerta cerrada  (bit 0): %s\n", puerta_cerrada  ? "OK" : "FALLA");
    printf("  Nivel agua OK   (bit 3): %s\n", nivel_agua_ok   ? "OK" : "FALLA");
    printf("  Temperatura OK  (bit 5): %s\n", temperatura_ok  ? "OK" : "FALLA");

    /* TODO 3: Escribe un if con && que verifique las 3 condiciones. */

    if (/* condición con && */) {
        printf("\n[RESULTADO] Sistema listo para arrancar.\n");
    } else {
        printf("\n[RESULTADO] Interlock activo: NO arrancar.\n");
    }

    return 0;
}
