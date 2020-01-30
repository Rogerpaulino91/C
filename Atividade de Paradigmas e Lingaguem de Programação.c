/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//implementação da lista encadeada
typedef struct node
{
    float data;
    struct node *next;
}no;

no *front = NULL;
no *rear = NULL;

void enqueue(float data){
    no *new = malloc(sizeof(no));
    new->data = data;
    new->next = NULL;
    if(rear == NULL){
        front = new;
        rear = new;
    }
    else{
        rear->next = new;
        rear = rear->next;
    }
}

int busca(float raio){
    if(rear != NULL){
        no *ref = front;
        while(ref->next != rear->next){
            if(raio == ref->data){
                return 0;
            }
            ref = ref->next;
        }
    }
        return 1;
}

void imprime(){
    no *ref;
    ref = front;
    while(ref->next != rear->next){
        printf("\n%f", ref->data);
        ref = ref->next;
    }
}

// Função para Calcular a Distancia dos Pontos
float distancia(float a, float b, float c, float d){
    return sqrt((pow((a-c),2))+(pow((b-d),2)));
}

float main(){
    float a, b, c, d, n, N, raio;
    printf("Entre com a coordenada x e y: \n");
    scanf("%f", &a);
    scanf("%f", &b);
    printf("Entre com n:\n");
    scanf("%f", &n);

    for(N = 0;N < n; N++){
        printf("Entre com o par de coordenadas:\n");
        scanf("%f", &c);
        scanf("%f", &d);
        raio = distancia(a,b,c,d);
        if(busca(raio)){
            enqueue(raio);
        }
    }

    printf("Os raios das circunferências sao:\n");
    imprime();
    printf("\n\n");
    system("pause");
}
