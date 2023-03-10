#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <iso646.h>

//266 - Ordenar lista encadeada em ordem crescente
//https://thehuxley.com/problem/266

//Code
typedef struct Node
{
    int info;
    struct Node *proximo;
}Node;

Node * getnode()//Function to alcoate memory
{
    return malloc(sizeof(Node));
}

void lastItem(Node **list, int num)// search the last number
{
    
    if((*list)->proximo != NULL)
    {
        lastItem(&(*list)->proximo, num);
    }
    else
    {
        Node * aux;
        Node * item = getnode();
        
        if(item)
        {
            item->info = num;
            item->proximo = NULL;
            aux = *list;
            aux->proximo = item;
        }
    }
}

void Insert(Node **list, int num){
    Node *aux, *item = getnode();

    if(item)
    {
        item->info = num;
        
        if(*list == NULL){
            item->proximo = NULL;
            *list = item;
        }
        else if(item->info < (*list)->info){
            item->proximo = *list;
            *list = item;
        }
        else{
            aux = *list;
            while(aux->proximo && item->info > aux->proximo->info)
                aux = aux->proximo;
            item->proximo = aux->proximo;
            aux->proximo = item;
        }
    }
}

void display(Node * no) //Function to print list
{
	if(no)
    {
		printf("%d ",no->info );
		display(no->proximo);
	}
	else printf("\n");
}


void input(Node **lista)// Recursive function to made a loop in menu
{
    int num;
    if(scanf("%d\n", &num) != EOF)
    {
        Insert(lista, num);
        input(lista);
    }

}

void main()
{
    Node *listaOne = NULL;
    input(&listaOne);

    display(listaOne);
    
}
