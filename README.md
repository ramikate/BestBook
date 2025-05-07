# 📚 Book Comparator in C

Este programa, escrito en lenguaje C, permite leer información sobre dos libros, compararlos según su valor (firma del autor y tipo de encuadernación), y mostrar cuál de ellos es más valioso.

## 🧠 ¿Qué he practicado con este ejercicio?

- Definición y uso de `struct` (estructura `tBook`)
- Uso de punteros para modificar datos desde funciones
- Modularización en C: separación en `.h`, `.c` y `main.c`
- Manejo de arrays de `char` y funciones como `scanf`, `printf`, `strcmp`, `strcpy`
- Comparación de cadenas y tipos enumerados (`enum`)
- Control del flujo con `if` anidados
- Buenas prácticas en entrada/salida de datos para sistemas automáticos de corrección

## 🛠️ Archivos del proyecto

- `main.c`: lógica principal del programa
- `book.h`: definición de la estructura `tBook` y cabeceras de funciones
- `book.c`: implementación de funciones auxiliares (`readBook`, `compareBooks`, `showBook`)

## 🖥️ Cómo se ejecuta

Compila todos los archivos juntos (por ejemplo con `gcc` o en CodeLite):

```bash
gcc main.c book.c -o bookApp
./bookApp
