#include <stdio.h>
#include <stdlib.h>

struct Node {
    int num;
    struct Node *prox;
};
typedef struct Node node;
typedef node *lista;

void exibelista(lista inicio) {
    if (inicio == NULL) {
        printf("Lista vazia\n");
    } else {
        node *temp = inicio;
        while (temp != NULL) {
            printf("%i\n", temp->num);
            temp = temp->prox;
        }
    }
}

lista criarlista() {
    lista inicio = (lista)malloc(sizeof(node));
    if (inicio != NULL) {
        inicio->prox = NULL;
    } else {
        printf("Erro na alocação\n");
    }
    return inicio;
}

int inserenoinicio(lista *inicio) {
    node *novo = (node*)malloc(sizeof(node));
    if (novo == NULL) {
        printf("Erro na alocação\n");
        return 0;
    } else {
        printf("Digite o valor: ");
        scanf("%i", &novo->num);
        novo->prox = *inicio;
        *inicio = novo;
        return 1;
    }
}

int main() {
    char op;
    lista inicio = criarlista();

    do {
        printf("Deseja adicionar mais um incremento? (s/n): ");
        scanf(" %c", &op);
        system("cls");

        if (op == 's') {
            if (!inserenoinicio(&inicio)) {
               
                printf("Erro ao inserir elemento\n");
                break;
            }
        }
    } while (op == 's');

    exibelista(inicio); // Display the final linked list

    // Free allocated memory for the linked list nodes
    node *temp = inicio;
    while (temp != NULL) {
        node *next = temp->prox;
        free(temp);
        temp = next;
    }

    return 0; // Return 0 to indicate successful program execution
}
