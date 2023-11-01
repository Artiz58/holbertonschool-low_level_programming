#include "main.h"
#include <unistd.h> // Necesario para la función write

void _puts(const char *str) {
    while (*str) {
        write(1, str, 1); // Escribe un carácter a la salida estándar (1 es el descriptor de archivo estándar para la salida)
        str++; // Mueve el puntero al siguiente carácter
    }
}

