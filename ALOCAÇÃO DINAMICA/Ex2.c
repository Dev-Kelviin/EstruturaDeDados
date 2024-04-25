#include <stdio.h>
#include <stdlib.h>

void alocar(int n, char *x) {

    int i;

    for (i = 0; i < n; i++) {
        printf("letra:\n");
        scanf(" %c", &x[i]);

        if (x[i] == 'a' || x[i] == 'e' || x[i] == 'i' || x[i] == 'o' || x[i] == 'u') {
            x[i] = ' '; 
            continue;   
        }
    }

    printf("\nPalavra sem vogais:\n");
    for (i = 0; i < n; i++) {
        printf("%c  ", x[i]);
    }

}

int main() {
    int n;
    char *x;

    printf("Informe o numero de letras da palavra que deseja:\n");
    scanf("%i", &n);

    x = (char *) malloc (n * sizeof(char));
    if (x == NULL) {
        printf("Erro de alocacao\n");
        exit(1);
    }

    alocar(n, x);
    free(x);
}
