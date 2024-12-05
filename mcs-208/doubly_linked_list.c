#include <stdio.h>
#include <stdlib.h>
struct node {
  int data;
  struct node *prev;
  struct node *next;
};

typedef struct node dlist;

dlist *create_node(int data) {
  dlist *new_node = (dlist *)malloc(sizeof(dlist));
  new_node->prev = NULL;
  new_node->data = data;
  new_node->next = NULL;

  return new_node;
}

void traverse(dlist *head) {
  dlist *temp = head;
  while (temp != NULL) {
    printf("%d->", temp->data);
    temp = temp->next;
  }

  printf("NULL\n");
}

void reverse_traverse(dlist *head) {
  if (head == NULL) {
    printf("The list is empty.\n");
    return;
  }

  // Move to the last node
  dlist *tail = head;
  while (tail->next != NULL) {
    tail = tail->next;
  }

  // Traverse backward from the last node
  while (tail != NULL) {
    printf("%d", tail->data);
    if (tail->prev != NULL)
      printf(" <- ");
    tail = tail->prev;
  }
  printf("\n");
}

void append_node(dlist **head, int data) {
  dlist *new_node = create_node(data);

  if (*head == NULL) {
    *head = new_node;
    return;
  }

  dlist *prev = NULL;
  dlist *curr = *head;

  while (curr->next != NULL) {
    prev = curr;
    curr = curr->next;
  }

  new_node->prev = curr;
  curr->next = new_node;
}

int main() {
  /* dlist *head = (dlist *)malloc(sizeof(dlist)); */
  /* dlist *second = (dlist *)malloc(sizeof(dlist)); */
  /* dlist *third = (dlist *)malloc(sizeof(dlist)); */
  /* dlist *tail = (dlist *)malloc(sizeof(dlist)); */
  /**/
  /* head->prev = NULL; */
  /* head->data = 1; */
  /* head->next = second; */
  /**/
  /* second->prev = head; */
  /* second->data = 2; */
  /* second->next = third; */
  /**/
  /* third->prev = second; */
  /* third->data = 3; */
  /* third->next = tail; */
  /**/
  /* tail->prev = third; */
  /* tail->data = 4; */
  /* tail->next = NULL; */
  /**/

  dlist *head = NULL;
  int element = 0;

  while (element != -1) {
    printf("input the element, input -1 to exit the loop");
    scanf("%d", &element);

    if (element == -1) {
      break;
    }

    append_node(&head, element);
  }

  traverse(head);
  reverse_traverse(head);
}
