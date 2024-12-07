#include <stdio.h>
#include <stdlib.h>

#define MAX 3

struct stack {
  int arr[MAX];
  int top;
};

typedef struct stack stack;

// initialize stack
void init_stack(stack *s1) {
  s1->top = -1; // indicates that the stack is empty
}

int is_full(stack *s1) { return s1->top == MAX - 1; }

int is_empty(struct stack *s1) { return s1->top == -1; }

void push(stack *s1, int value) {
  if (is_full(s1)) {
    printf("Stack Overflow! cannot push %d\n", value);
  } else {
    s1->arr[++s1->top] = value;
    printf("Pushed %d onto the stack\n", value);
  }
}

int pop(stack *s1) {
  if (is_empty(s1)) {
    printf("Stack Underflow! cannot pop\n");
    return -1;
  } else {
    int value = s1->arr[s1->top--];
    printf("Poped %d from the stack\n", value);
    return value;
  }
}

void traverse(stack *s1) {
  if (is_empty(s1)) {
    printf("Stack is empty\n");
  } else {
    printf("stack items: \n");
    for (int i = 0; i <= s1->top; i++) {
      printf("%d\n", s1->arr[i]);
    }
  }
}

int main() {
  stack s1; // stack variable (instance of stack structure)

  init_stack(&s1);

  int choice, value;

  while (1) {
    printf("Stack Operations:\n");
    printf("1. push\n");
    printf("2. pop\n");
    printf("3. traverse (print all elements)\n");
    printf("4. exit\n");

    scanf("%d", &choice);

    switch (choice) {
    case 1:
      printf("Enter a value to push: ");
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
      printf("exiting ...\n");
      exit(0);
    default:
      printf("invalid choice\n");
    }
  }

  return 0;
}
