#include <stdio.h>
#include <string.h>
#include "book.h"

/* Lógica principal */
int main() {
    tBook b1;
    tBook b2;
    tBook better;

    // Leer los dos libros
    printf("INPUT\n");
    readBook(&b1);
    readBook(&b2);

    // Comparar libros y mostrar el mejor
    printf("OUTPUT\n");

    if (strcmp(b1.title, b2.title) != 0) {// Comparar títulos
        printf("NON-COMPARABLE BOOKS\n");
    } else {
        
        compareBooks(b1, b2, &better);
        showBestBook(better);
    }

    return 0;
}