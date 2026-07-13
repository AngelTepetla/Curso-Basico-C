/**
 * MÓDULO 6 — RETO: Simulación de Interrupción
 * =============================================
 * OBJETIVO: Demostrar la diferencia crítica entre una variable con y sin
 *           el modificador volatile en un contexto de ISR embebida.
 *
 * ENUNCIADO:
 *   Se tiene un bucle while que espera a que una bandera global sea activada
 *   por una función que simula una ISR. El reto consiste en declarar la
 *   bandera correctamente para que el compilador no la optimice.
 *
 * CONTEXTO:
 *   En sistemas embebidos reales, una ISR modifica una bandera global.
 *   Si el compilador no sabe que la variable puede cambiar externamente,
 *   la optimiza a una constante → bug silencioso (bucle infinito).
 *
 * ╔══════════════════════════════════════════════════════╗
 * ║  TODO ÚNICO: Declara la bandera global (línea ~40)   ║
 * ║                                                      ║
 * ║  PASO 1 → sin volatile:                              ║
 * ║    uint8_t flag_interrupcion = 0;                    ║
 * ║  PASO 2 → agrega volatile y observa la diferencia:   ║
 * ║    volatile uint8_t flag_interrupcion = 0;           ║
 * ╚══════════════════════════════════════════════════════╝
 *
 * NOTA: Con optimización -O2 habilitada, sin volatile el compilador puede
 *       convertir el while en un bucle infinito. Con volatile lo lee siempre.
 *
 * TIEMPO ESTIMADO: 12 minutos
 *
 * COMPILADOR:       1) onlinegdb.com
 * ALTERNATIVA:      2) programiz.com/c-programming/online-compiler
 * BONUS (volatile): 3) godbolt.org  → activa -O2 y compara el assembly
 *                      con y sin volatile para ver la optimizacion del compilador
 */

#include <stdint.h>
#include <stdio.h>

/* TODO: Declara la bandera global.
 *       Primero sin volatile, ejecuta, luego agrega volatile y compara.
 *
 *       uint8_t          flag_interrupcion = 0;   <-- sin volatile
 *       volatile uint8_t flag_interrupcion = 0;   <-- con volatile
 */

/* Simula una ISR que activa la bandera. */
void simular_isr(void)
{
   flag_interrupcion = 1;
}

int main(void)
{
   uint32_t iteraciones = 0;

   printf("Esperando interrupcion...\n");

   while(!flag_interrupcion)
   {
      iteraciones++;

      if(iteraciones == 5)
      {
         printf("  [ISR] Simulando interrupcion en iteracion %lu...\n", (unsigned long)iteraciones);

         simular_isr();
      }
   }

   printf("Interrupcion detectada tras %lu iteraciones.\n", (unsigned long)iteraciones);

   return 0;
}
