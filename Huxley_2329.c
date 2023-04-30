#include<stdio.h>
#include<stdlib.h>

//2329 - Let's eat!
//https://thehuxley.com/problem/2329

struct person{
    char name[20];
    int food;
};

struct stack{
    struct person cliente; 
    struct stack * next;
};

struct stack * getnode(){
    return malloc(sizeof(struct stack));
}

struct stack * insertNode(struct person client){
    struct stack * example = getnode();
    
    if(example){
        example->cliente = client;
        example->next = NULL;
        return example;
    }
}

struct stack * pop(struct stack * list){
    struct stack * aux = list;
    list = list->next;
    free(aux);
    return list;
}

struct stack * push(struct stack * list, struct person client){
    if(not list){
        return insertNode(client);
    }
    else{
        struct stack * aux = getnode();
        aux->cliente = client;
        aux->next = list;
        return aux;
        }
}

struct stack * insert(struct stack * list, int tam, int i){
    while(i < tam){
        struct person aux;
        scanf("%s ", aux.name);
        scanf("%d\n", &aux.food);
        list = push(list, aux);
        i++;
    }
    return list;
    
}

void despop(struct stack * list, int tam){
    
    while(tam){
        while(list->cliente.food > 0){
            if(list->cliente.food){
                printf("%s foi servido(a).\n", list->cliente.name);
                list->cliente.food -= 400;
            }
            if(list->cliente.food > 0){
                printf("Fica tranquilo(a), %s pode se servir novamente!\n", list->cliente.name);
            }
        }
        list = pop(list);
        tam--;
    }
}

void main(){
    struct stack * queue = NULL;

    int n;
    scanf("%d\n", &n);

    queue = insert(queue, n, 0);
    despop(queue, n);
}
