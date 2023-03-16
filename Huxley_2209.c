#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    char value;
    struct node *left;
    struct node *right;
} Node;

Node *createNode (char value) {
    Node *newNode = malloc(sizeof(Node));
    newNode->value = value;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

void insertNode (Node *node, char value) {
    if (value < node->value)
        if (node->left)
            insertNode(node->left, value);
        else
            node->left = createNode(value);
    else if (value > node->value)
        if (node->right)
            insertNode(node->right, value);
        else
            node->right = createNode(value);
}


Node *initValues (Node **root) {
    root = createNode('M');
    insertNode(root, 'G');
    insertNode(root, 'T');
    insertNode(root, 'C');
    insertNode(root, 'K');
    insertNode(root, 'Q');
    insertNode(root, 'W');
    insertNode(root, 'A');
    insertNode(root, 'E');
    insertNode(root, 'I');
    insertNode(root, 'L');
    insertNode(root, 'O');
    insertNode(root, 'R');
    insertNode(root, 'U');
    insertNode(root, 'Y');
    insertNode(root, ' ');
    insertNode(root, 'B');
    insertNode(root, 'D');
    insertNode(root, 'F');
    insertNode(root, 'H');
    insertNode(root, 'J');
    insertNode(root, 'N');
    insertNode(root, 'P');
    insertNode(root, 'S');
    insertNode(root, 'V');
    insertNode(root, 'X');
    insertNode(root, 'Z');

    return root;
}

void scanCode (Node *root, char *string) {
    Node *aux = root;
    char c;

    while (scanf("%c", &c) && c != '\0') {
        if (c == '-')
            aux = aux->left;
        else if (c == '|')
            aux = aux->right;
        else if (c == '*') {
            *string = aux->value;
            scanCode(root, ++string);
            return;
        }
    }
    
    *string = '\0';
}

int main (void) {
    Node *root = NULL;
    char string[256];

    root = initValues(root);

    scanCode(root, string);
    puts(string);

    return 0;
}


