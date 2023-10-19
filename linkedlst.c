#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node {
    char *book[6];
    struct Node *nextPtr;
};

struct Node *head = NULL;

void printLinkedList(){
    struct Node *p = head;
    while(p != NULL) {
        for (int i = 0; i < 6; i++) {
            printf("%s\n", p->book[i]);
        }
        printf("\n");
        p = p->nextPtr;
    }
}

void InsertAtEnd(char *book[6]) {
    struct Node *LinkedList = (struct Node*) malloc(sizeof(struct Node));
   
    for (int i = 0; i < 6; i++) {
        LinkedList->book[i] = book[i];
    }
    LinkedList->nextPtr = NULL;

    if (!head) {
        head = LinkedList;
    } else {
        struct Node *lk = head;
        while (lk->nextPtr != NULL) {
            lk = lk->nextPtr;
        }
        lk->nextPtr = LinkedList;
    }
}

void freeLinkedList() {
    struct Node *current = head;
    while (current != NULL) {
        struct Node *p = current;
        current = current->nextPtr;
        free(p);  // Only free the node itself
    }
    head = NULL;  
}



int main(void){
  char *book1[6] = {"name : Harry Potter and the Sorcerers Stone ", "price in eu: 8,37", "pages:352", "language: en", "weight g: 390", "year:1997"};
  char *book2[6] = {"name :  Harry Potter and the Chamber of Secrets", "price in eu: 8,37", "pages:384", "language: en", "weight g: 400", "year:1998"};
  char *book3[6] = {"name : Harry Potter and the Prisoner of Azkaban", "price in eu: 7,99", "pages:480", "language: en", "weight g: 520", "year:1999"};
  char *book4[6] = {"name : Harry Potter and the Goblet of Fire", "price in eu: 9,18", "pages:640", "language: en", "weight g: 670", "year:2000"};
  char *book5[6] = {"name : Harry Potter and the Order of the Phoenix", "price in eu: 8,39", "pages:816", "language: en", "weight g: 830", "year:2003"};
  char *book6[6] = {"name : Harry Potter and the Half-Blood Prince", "price in eu: 8,99", "pages:560", "language: en", "weight g: 590", "year:2005"};
  char *book7[6] = {"name :  Harry Potter and the Deathly Hallows", "price in eu: 8,99", "pages:640", "language: en", "weight g: 680", "year:2007"};

  InsertAtEnd(book1);
  InsertAtEnd(book2);
  InsertAtEnd(book3);
  InsertAtEnd(book4);
  InsertAtEnd(book5);
  InsertAtEnd(book6);
  InsertAtEnd(book7);

  printLinkedList();
  freeLinkedList();  

  return 0;
}













