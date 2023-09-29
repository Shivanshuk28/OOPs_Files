#include <stdio.h> Post fix evalution
#include <stdlib.h>
#include <ctype.h>
#define MAX_STACK_SIZE 100
// Stack definition
struct Stack {
int top;
int items[MAX_STACK_SIZE];
};
// Function to initialize a stack
void initialize(struct Stack* stack) {
stack->top = -1;
}
// Function to check if the stack is empty
int isEmpty(struct Stack* stack) {
return stack->top == -1;
}
// Function to check if the stack is full
int isFull(struct Stack* stack) {
return stack->top == MAX_STACK_SIZE - 1;
}
// Function to push an element onto the stack
void push(struct Stack* stack, int item) {
if (isFull(stack)) {
printf("Stack Overflow\n");
exit(1);
}
stack->items[++stack->top] = item;
}
// Function to pop an element from the stack
int pop(struct Stack* stack) {
if (isEmpty(stack)) {
printf("Stack Underflow\n");
exit(1);
}
return stack->items[stack->top--]; 
//  INT ELEMENT;
// ELEMENT=STACK->ITEMS(STACK->TOP)
// TOP--;
// RETURN ELEMENT;
}
// Function to evaluate a postfix expression
int evaluatePostfix(char* expression) {
struct Stack stack;
initialize(&stack);
for (int i = 0; expression[i] != '\0'; i++) {
if (isdigit(expression[i])) {
// If the current character is a digit, push it onto the stack
push(&stack, expression[i] - '0');
} else {
// If the current character is an operator, pop two operands and perform the
// operation
int operand2 = pop(&stack);
int operand1 = pop(&stack);
switch (expression[i]) {
case '+':
push(&stack, operand1 + operand2);
break;
case '-':
push(&stack, operand1 - operand2);
break;
case '*':
push(&stack, operand1 * operand2);
break;
case '/':
push(&stack, operand1 / operand2);
break;
default:
printf("Invalid character in expression: %c\n", expression[i]);
exit(1);
}
}
}
// The final result should be on the top of the stack
return pop(&stack);
}
int main() {