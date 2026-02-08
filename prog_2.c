#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define MAX 100

char stack[MAX];
int top = -1;

// Stack operations
void push(char c) {
    if (top == MAX - 1) {
        printf("Stack overflow\n");
        return;
    }
    stack[++top] = c;
}

char pop() {
    if (top == -1)
        return '\0';
    return stack[top--];
}

char peek() {
    if (top == -1)
        return '\0';
    return stack[top];
}

// Check if character is operator
int isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

// Return precedence of operator
int precedence(char c) {
    if (c == '*' || c == '/') return 2;
    if (c == '+' || c == '-') return 1;
    return 0;
}

// Convert infix to postfix
void infixToPostfix(char infix[], char postfix[]) {
    int i = 0, j = 0;
    char c;

    while ((c = infix[i++]) != '\0') {
        if (isalnum(c)) {
            postfix[j++] = c;
        } else if (c == '(') {
            push(c);
        } else if (c == ')') {
            while (top != -1 && peek() != '(')
                postfix[j++] = pop();
            pop(); // remove '('
        } else if (isOperator(c)) {
            while (top != -1 && precedence(peek()) >= precedence(c))
                postfix[j++] = pop();
            push(c);
        }
    }
    while (top != -1)
        postfix[j++] = pop();

    postfix[j] = '\0';
}

// Evaluate simple postfix expression 
int evaluatePostfix(char postfix[]) {
    int valStack[MAX];
    int topVal = -1;

    for (int i = 0; postfix[i] != '\0'; i++) {
        char c = postfix[i];
        if (isdigit(c)) {
            valStack[++topVal] = c - '0';
        } else if (isOperator(c)) {
            int b = valStack[topVal--];
            int a = valStack[topVal--];
            switch (c) {
                case '+': valStack[++topVal] = a + b; break;
                case '-': valStack[++topVal] = a - b; break;
                case '*': valStack[++topVal] = a * b; break;
                case '/': valStack[++topVal] = a / b; break;
            }
        }
    }
    return valStack[topVal];
}

int main() {
    char infix[MAX];
    char postfix[MAX];
    printf("Enter an infix expression (single-digit numbers only): ");
    scanf("%s", infix);
    infixToPostfix(infix, postfix);
    printf("Postfix expression: %s\n", postfix);
    int result = evaluatePostfix(postfix);
    printf("Evaluation result: %d\n", result);
    return 0;
}
