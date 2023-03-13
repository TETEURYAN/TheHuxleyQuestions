#include <stdio.h>
#include <stdlib.h>
#include <iso646.h>

//264 - Invert a Linked List in a single pass
//https://thehuxley.com/problem/264


typedef struct Node
{
    int info;
    struct Node *proximo;
}Node;

Node * getnode()
{
    return malloc(sizeof(Node));
}

void Insert(Node **list, int num)
{
    Node *item = getnode();
    
    if(item)
    {
        item -> info = num;
        item -> proximo = *list;
        *list = item;
    }
}

void display(Node * no) 
{
	if(no)
    {
		printf("%d ",no->info );
		display(no->proximo);
	}
	else printf("\n");
}


void input(Node **lista)
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
