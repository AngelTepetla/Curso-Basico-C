/**
 * MÓDULO 7 — RETO: Mapeador de Protocolos
 * =========================================
 * OBJETIVO: Usar una union para mapear una struct de configuración a un
 *           arreglo de bytes listo para transmitir por protocolo serial.
 *
 * ENUNCIADO:
 *   Crear una union que contenga una struct con los parámetros de
 *   configuración de un electrodoméstico y, al mismo tiempo, un arreglo
 *   de bytes (uint8_t buffer[]). Demostrar cómo modificar un campo de
 *   la estructura altera automáticamente los bytes del arreglo, sin
 *   necesidad de copias ni serialización manual.
 *
 * ESTRUCTURA SUGERIDA para Config_t:
 *   uint8_t  modo;          // 1 byte — modo de operación (0=manual, 1=auto)
 *   uint16_t temperatura;   // 2 bytes — temperatura objetivo (°C * 10)
 *   uint8_t  velocidad;     // 1 byte — velocidad del motor (0-100 %)
 *
 * PASOS:
 *   1. Define la struct Config_t con los campos indicados.
 *   2. Define la union ConfigPacket_t que contenga:
 *        - Config_t datos;
 *        - uint8_t  buffer[sizeof(Config_t)];
 *   3. En main(), crea una variable de tipo ConfigPacket_t.
 *   4. Asigna valores a los campos de la struct (datos.modo, etc.).
 *   5. Imprime los bytes del buffer[] en hexadecimal para verificar el mapeo.
 *   6. BONUS: imprime cuántos bytes ocuparía el paquete en el bus serial.
 *
 * NOTA: La alineación puede añadir padding. Usa __attribute__((packed))
 *       si quieres forzar la eliminación del padding (GCC/Clang).
 *
 * TIEMPO ESTIMADO: 10 minutos
 *
 * COMPILADOR:       1) onlinegdb.com
 * ALTERNATIVA:      2) programiz.com/c-programming/online-compiler
 *
 */

#include <stdint.h>
#include <stdio.h>

/* TODO 1: Define la struct Config_t con los campos sugeridos. */


/* TODO 2: Define la union ConfigPacket_t que comparta Config_t
 *         y un buffer de bytes del mismo tamaño.
 */


int main(void) {

    /* TODO 3: Declara una variable de tipo ConfigPacket_t. */


    /* TODO 4: Asigna valores a los campos de la struct:
     *         modo = 1 (automático)
     *         temperatura = 250  (25.0 °C)
     *         velocidad   = 75   (75 %)
     */


    /* TODO 5: Imprime cada byte del buffer[] en hexadecimal. */
    printf("--- Bytes del paquete ---\n");
    for (size_t i = 0; i < sizeof(pkt.datos); i++) {
        printf("  buffer[%zu] = 0x%02X\n", i, pkt.buffer[i]);
    }

    /* TODO 6 (BONUS): Imprime el tamaño total del paquete con sizeof. */
    printf("\nTamano del paquete: %zu bytes\n", sizeof(pkt));


    return 0;
}
