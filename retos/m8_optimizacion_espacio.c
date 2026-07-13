/**
 * MÓDULO 8 — RETO: Optimización de Espacio
 * ==========================================
 * OBJETIVO: Reordenar los miembros de una struct para eliminar el padding
 *           del compilador y reducir su tamaño al mínimo posible.
 *
 * ENUNCIADO:
 *   Se te entrega una estructura de datos mal alineada que mezcla tipos
 *   de 8, 16 y 32 bits. Debes:
 *     1. Medir su tamaño actual con sizeof (verás bytes de padding).
 *     2. Reordenar los miembros en SistemaOptimizado_t para minimizar
 *        el tamaño sin perder ningún campo.
 *     3. Medir el tamaño optimizado y comparar ambos resultados.
 *
 * REGLA DE ALINEACIÓN en micros de 32 bits:
 *   El compilador inserta padding para alinear cada campo a su propio
 *   tamaño (uint32_t → 4 bytes, uint16_t → 2 bytes, uint8_t → 1 byte).
 *   Ordenar de mayor a menor tamaño elimina o reduce el padding.
 *
 * ESTRUCTURA ORIGINAL (mal ordenada — NO modificar):
 *   uint8_t  estado;       // 1 byte
 *   uint32_t contador;     // 4 bytes  ← padding antes de este campo
 *   uint16_t temperatura;  // 2 bytes
 *   uint8_t  error;        // 1 byte   ← padding al final
 *   Tamaño esperado con padding: 12 bytes
 *
 * PASOS:
 *   1. Compila y ejecuta el código base: observa el sizeof de Sistema.
 *   2. Define SistemaOptimizado_t reordenando los campos de mayor a menor.
 *   3. Mide el sizeof de SistemaOptimizado_t.
 *   4. Imprime ambos tamaños y la diferencia en bytes ahorrados.
 *   5. BONUS: usa __attribute__((packed)) y observa el tamaño mínimo absoluto.
 *
 * TIEMPO ESTIMADO: 10 minutos
 *
 * COMPILADOR:       1) onlinegdb.com
 * ALTERNATIVA:      2) programiz.com/c-programming/online-compiler
 *
 */

#include <stdint.h>
#include <stdio.h>

/* Estructura desordenada — NO modificar */
struct Sistema {
    uint8_t  estado;        /* 1 byte  */
    uint32_t contador;      /* 4 bytes */
    uint16_t temperatura;   /* 2 bytes */
    uint8_t  error;         /* 1 byte  */
};

/* TODO 1: Define SistemaOptimizado_t reordenando los mismos campos
 *         de mayor a menor tamaño para minimizar el padding.
 *
 *   struct SistemaOptimizado {
 *       ...
 *   };
 */


int main(void) {

    /* TODO 2: Imprime el tamaño de la struct original. */
    printf("sizeof(struct Sistema)           = %zu bytes\n",
           sizeof(struct Sistema));

    /* TODO 3: Imprime el tamaño de la struct optimizada. */
    printf("sizeof(struct SistemaOptimizado) = %zu bytes\n",
           sizeof(struct SistemaOptimizado));

    /* TODO 4: Calcula e imprime los bytes ahorrados. */
    printf("Bytes ahorrados: %zd\n",
           (ssize_t)sizeof(struct Sistema) - (ssize_t)sizeof(struct SistemaOptimizado));


    /* TODO 5 (BONUS): Define una tercera struct con __attribute__((packed))
     *                 y muestra su tamaño mínimo absoluto.
     */


    return 0;
}
