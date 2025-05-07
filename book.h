/* Constantes y estructuras */
#define MAX_LEN 31

typedef enum {FALSE, TRUE}
    tSign;

typedef enum {MANUSCRIPT, HARDCOVER, PAPERBACK}
    tBinding;

typedef struct {
    char title[MAX_LEN];
    tSign signedByAuthor;
    tBinding bookBinding;
} tBook;


/* Cabeceras */
void readBook(tBook *book);
void compareBooks(tBook b1, tBook b2, tBook *better);
void showBestBook(tBook book);