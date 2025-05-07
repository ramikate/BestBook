#include <stdio.h>
#include "book.h"

/* Definición de funciones y acciones */
void readBook(tBook *book) {//pedimos la info al usuario y lo guardamos en el struct
    int signedInput;
    int bindingInput;

    printf("TITLE?\n");
    scanf("%s", book->title); //(*book).title abreviado

    printf("IS SIGNED (0-FALSE, 1-TRUE)?\n");
    scanf("%d", &signedInput);
    book->signedByAuthor = signedInput; //(*book).signedByAuthor = signedInput;

    printf("BOOKBINDING (0-MANUSCRIPT, 1-HARDCOVER, 2-PAPERBACK)?\n");
    scanf("%d", &bindingInput);
    book->bookBinding = bindingInput;//(*book).bookBinding = bindingInput;

}


void compareBooks(tBook b1, tBook b2, tBook *better){//Determinar qué libro es más valioso
   if (b1.signedByAuthor == TRUE && b2.signedByAuthor == FALSE) {
    *better = b1;//si el primero esta firmado será el mejor
} else {
    if (b2.signedByAuthor == TRUE && b1.signedByAuthor == FALSE) {
        *better = b2;//si el segundo está firmado será el mejor
    } else {
        if (b1.bookBinding < b2.bookBinding) {
            *better = b1;//si ambos estan firmados y el primero tiene mejor encadernacion será el mejor
        } else {
            if (b2.bookBinding < b1.bookBinding) {
                *better = b2;//en caso contrario, el mejor será el segundo
            } else {
                *better = b1; // empate total, el primer libro será el mejor
            }
        }
    }
}
}


void showBestBook(tBook book) {
    printf("THE MOST VALUABLE BOOK IS:\n");
    printf("TITLE: %s\n", book.title);
    printf("IS SIGNED (0-FALSE, 1-TRUE): %d\n", book.signedByAuthor);
    printf("BOOKBINDING (0-MANUSCRIPT, 1-HARDCOVER, 2-PAPERBACK): %d\n", book.bookBinding);
}