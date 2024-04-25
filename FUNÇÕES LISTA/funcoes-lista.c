#include <stdio.h>
#include <stdlib.h>

struct Node{
    int num;
    struct Node *prox;
};
typedef struct Node node;
typedef node *lista;


lista* criarlistta(){
    lista *inicio = (lista*) malloc(sizeof(lista));
    if (inicio != NULL){
        *inicio = NULL;
    }else{
        printf("Erro na alocaçãooo");
    }
    return inicio;
}

int inserenoinicio(lista *inicio){
    node *novo = (node*) malloc(sizeof(node));
    if(novo == NULL){
        printf("Erro na alocação");
        return 0;
    }else{
        printf("Digite o valor: ");
        scanf("%i", &novo->num);
        novo->prox = (*inicio);
        *inicio = novo;

    }
}

int inserenofinal(lista *inicio){
    node *novo = (node*)malloc(sizeof(node));
    if(novo == NULL){
        printf("Erro na alocacao");
        return 0;
    }else{
        node *temp;
        temp = (*inicio);
        while (temp->prox != NULL){
            temp = temp->prox;
        }
        temp->prox = novo;
        novo->prox = NULL;
        printf("Digite o valor: ");
        scanf("%i", &novo->num);
    }
}

void exibelista(lista*inicio){
    
    if(inicio == NULL){
        printf("Lista vazia");
    }else{
        node *temp;
        temp = (*inicio);

        while (temp->prox != NULL){
            printf("%i\n", temp->num);
            temp = temp->prox;
        }
        printf("%i\n", temp->num);
    }
}

void liberar(lista* inicio){
    if ((*inicio) == NULL){
        printf("Lista vazia");
    }else{
        node *temp;
        while ((*inicio) == NULL){
            temp = *inicio;
            *inicio = (*inicio)->prox;
            free(temp);
        }
        *inicio = NULL;
    }
    
}

int main(){
    lista* inicio;
    inicio = criarlistta();
    inserenoinicio(inicio);
    inserenofinal(inicio);
    exibelista(inicio);
    liberar(inicio);


    printf("Infrome a opcao desejada: \n");
    printf("[1] ");
    printf("[2] ");
    printf("[3] ");
    printf("[4] ");
    printf("[5] ");

    



}

