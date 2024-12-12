#include <stdio.h>
#include <stdlib.h>
#define MAX 3

struct stack {
  int arr[MAX];
  int top;
};

typedef struct stack stack;

void init_stack(stack *s1) { s1->top = -1; }

int is_empty(stack *s1) { return s1->top == -1; }

int is_full(stack *s1) { return s1->top == MAX - 1; }

void push(stack *s1, int value) {
  if (is_full(s1)) {
    printf("stack overflow, cannot push\n");
    return;
  } else {
    s1->arr[++s1->top] = value;
    printf("pushed %d\n", value);
    return;
  }
}

int pop(stack *s1) {
  if (is_empty(s1)) {
    printf("stack undeflow, cannot pop\n");
    return -1;
  } else {
    return s1->arr[s1->top--];
  }
}

void traverse(stack *s1) {
  if (is_empty(s1)) {
    printf("stack is empty");
  } else {
    printf("stack elements: \n");
    for (int i = 0; i <= s1->top; i++) {
      printf("%d ", s1->arr[i]);
    }
  }
}

int main() {

  stack s1;
  int choice, value;
  init_stack(&s1);

  while (1) {
    printf("Stack operations: \n");
    printf("1: push\n");
    printf("2: pop\n");
    printf("3: traverse\n");
    printf("4: exit\n");
    scanf("%d", &choice);

    switch (choice) {
    case 1:
      printf("enter value to push: ");
      scanf("%d", &value);
      push(&s1, value);
      break;
    case 2:
      pop(&s1);
      break;
    case 3:
      traverse(&s1);
      break;
    case 4:
      printf("exiting...\n");
      exit(1);
    default:
      printf("invalid choice\n");
    }
  }

  return 0;
}
