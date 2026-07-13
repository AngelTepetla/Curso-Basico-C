# 🎓 Retos Prácticos — C para Sistemas Embebidos 32 bits

Archivos base para los **8 retos** del curso. Cada archivo incluye el
enunciado completo, el contexto técnico y los `TODO` marcados con el
paso a seguir. Los ingenieros solo deben rellenar las secciones indicadas.

---

## 📁 Estructura

```
retos/
├── m1_overflow_silencioso.c      → Tipos de dato y overflow
├── m2_interlock_seguridad.c      → Operadores lógicos y de bits
├── m3_maquina_estados.c          → Flujo de control y switch-case
├── m4_configurador_motor.c       → Funciones y enum
├── m5_modificador_contador.c     → Punteros y desreferencia
├── m6_simulacion_interrupcion.c  → volatile e ISR
├── m7_mapeador_protocolos.c      → struct / union y mapeo de bytes
└── m8_optimizacion_espacio.c     → Padding y alineación de memoria
```

---

## 🔴 Retos — Resumen rápido

| # | Archivo | Reto | Objetivo | Tiempo |
|---|---------|------|----------|--------|
| M1 | `m1_overflow_silencioso.c` | El Desbordamiento Silencioso | Demostrar overflow y corregir con el tipo correcto | 10 min |
| M2 | `m2_interlock_seguridad.c` | Validación de Enclavamiento | Verificar 3 condiciones de seguridad con bits y lógicos | 10 min |
| M3 | `m3_maquina_estados.c` | Main Loop y Máquina de Estados | Bucle principal con switch-case para control de estados | 12 min |
| M4 | `m4_configurador_motor.c` | Configurador de Periféricos | Función que configura motor usando enum y retorna error | 10 min |
| M5 | `m5_modificador_contador.c` | Modificador de Contador | Usar punteros para modificar una variable externa | 10 min |
| M6 | `m6_simulacion_interrupcion.c` | Simulación de Interrupción | Diferencia entre variable con y sin `volatile` | 12 min |
| M7 | `m7_mapeador_protocolos.c` | Mapeador de Protocolos | Union para mapear struct a arreglo de bytes | 15 min |
| M8 | `m8_optimizacion_espacio.c` | Optimización de Espacio | Reordenar struct para eliminar padding | 10 min |

---

## 🛠️ Cómo usar estos archivos

1. Abre el archivo del módulo correspondiente en cualquiera de los compiladores online listados abajo.
2. Lee el **enunciado** y los **pasos** al inicio del archivo.
3. Busca las marcas `/* TODO N: ... */` y rellena el código indicado.
4. Compila, ejecuta y verifica que el resultado sea correcto.

> **Tip:** Cada TODO incluye una pista o la firma esperada de la función.
> Los BONUS son opcionales para quienes terminen antes del tiempo estimado.

---

## 💻 Compiladores online

| # | URL | Notas |
|---|-----|-------|
| 1 | [onlinegdb.com](https://onlinegdb.com) | ⭐ Principal — depurador integrado, soporta `stdint.h` / `stdbool.h` |
| 2 | [programiz.com/c-programming/online-compiler](https://www.programiz.com/c-programming/online-compiler/) | 🔄 Alternativa — interfaz simple, rápido para pruebas rápidas |
| 3 | [godbolt.org](https://godbolt.org) | 🔬 Recomendado para **M6** — muestra el assembly generado; activa `-O2` y compara el código con y sin `volatile` |

> Si **onlinegdb.com** no carga, usa **programiz** como reemplazo directo.
> Para el reto de `volatile` (M6), **godbolt** hace la diferencia visible de inmediato.

---

## ⚙️ Compilación local (opcional)

Si prefieres compilar localmente con GCC:

```bash
# Compilar un reto individual
gcc -Wall -Wextra -std=c99 m1_overflow_silencioso.c -o m1 && ./m1

# Con optimización para observar el efecto de volatile (M6)
gcc -O2 -Wall -std=c99 m6_simulacion_interrupcion.c -o m6 && ./m6
```

---

## 📌 Convenciones del curso

| Elemento | Convención |
|----------|-----------|
| Tipos enteros | Siempre usar `uint8_t`, `uint16_t`, `uint32_t` de `<stdint.h>` |
| Booleanos | Usar `<stdbool.h>` con `true`/`false` |
| Nombres de tipos | `PascalCase` con sufijo `_t` (ej. `VelocidadMotor_t`) |
| Nombres de funciones | `modulo_accion()` en snake_case (ej. `motor_set_velocidad()`) |
| Retorno de error | `0` = OK, `-1` = error (usando `int8_t`) |
