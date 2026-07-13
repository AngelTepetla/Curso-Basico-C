/**
 * MÓDULO 1 — RETO: El Desbordamiento Silencioso
 * ================================================
 * OBJETIVO: Demostrar overflow y corregirlo con el tipo correcto.
 *
 * ENUNCIADO:
 *   Crea un programa que sume dos variables uint8_t que provoquen un
 *   desbordamiento (overflow) por superar 255. Analiza el resultado y
 *   corrígelo eligiendo el tipo de dato explícito correcto.
 *
 * PASOS:
 *   1. Declara dos variables uint8_t con valores que sumen > 255.
 *   2. Muestra el resultado de la suma (observa el overflow).
 *   3. Declara las mismas variables como uint16_t y muestra el resultado correcto.
 *
 * TIEMPO ESTIMADO: 10 minutos
 *
 * COMPILADOR:       1) onlinegdb.com
 * ALTERNATIVA:      2) programiz.com/c-programming/online-compiler
 *
 */

#include <stdint.h>
#include <stdio.h>

int main(void) {

    /* TODO 1: Declara dos variables de 8 bits con valores que sumen > 255.
     *         Ejemplo: a = 200, b = 100
     */


    /* TODO 2: Calcula la suma y guárdala en otra variable de 8 bits. */

    printf("--- Con 8 bits ---\n");
    printf("  a = %u, b = %u\n", a8, b8);
    printf("  a + b = %u  <-- OVERFLOW (esperado: %u)\n", suma8, (uint16_t)a8 + b8);

    /* TODO 3: Declara a, b y resultado como variable de 16 bits con los mismos valores. */

    printf("\n--- Con 16 bits ---\n");
    printf("  a = %u, b = %u\n", a16, b16);
    printf("  a + b = %u  <-- correcto\n", suma16);

    return 0;
}
