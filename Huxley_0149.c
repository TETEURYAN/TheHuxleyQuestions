#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iso646.h>
#include <ctype.h>

//149 - Infix to Postfix
//https://thehuxley.com/problem/149

#define tam 100

struct Stack {
    int top;
    char items[tam];
};

int isEmpty(struct Stack* stack) {
    return stack->top == -1;
}

int isFull(struct Stack* stack) {
    return stack->top == tam - 1;
}

void push(struct Stack* stack, char item) {
    stack->items[++stack->top] = item;
}

char pop(struct Stack* stack) {
    return stack->items[stack->top--];
}

char peek(struct Stack* stack) {
    return stack->items[stack->top];
}

int isOperator(char ch) {
    return ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^';
}

int precedence(char ch) {
    switch (ch) {
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        case '^':
            return 3;
        default:
            return -1;
    }
}

void postfixOP(char * infix, char * postfix) {
    struct Stack stack;
    stack.top = -1;
    int i, j;
    for (i = 0, j = 0; infix[i] != '\0'; i++) {
        char ch = infix[i];
        if (isalnum(ch)) {
            postfix[j++] = ch;
        }
        else if (ch == '(') {
            push(&stack, ch);
        }
        else if (ch == ')') {
            while (not isEmpty(&stack) and peek(&stack) != '(') {
                postfix[j++] = pop(&stack);
            }
            
            pop(&stack);
            
        }
        else if (isOperator(ch)) {
            while (not isEmpty(&stack) and precedence(ch) <= precedence(peek(&stack))) {
                postfix[j++] = pop(&stack);
            }
            push(&stack, ch);
        }
    }
    while (not isEmpty(&stack)) {
        postfix[j++] = pop(&stack);
    }
    postfix[j] = '\0';
}

int main(){
    
    char infix[tam], postfix[tam];
    
    int op;
    scanf("%d", &op);
    while(op){
        scanf("%s", infix);
        postfixOP(infix, postfix);
        printf("%s\n", postfix);
        op--;
    }
}    
