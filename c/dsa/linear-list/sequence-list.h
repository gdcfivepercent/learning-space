#ifndef SEQUENCE_LIST_H
#define SEQUENCE_LIST_H

#define MAX_LENGTH 100

#define LIST_FULL -2
#define TRUE 1
#define FALSE 0
#define SUCCESS 0
#define ERROR -1

typedef int Elmt;

typedef struct {
    Elmt *head;
    int length;
} List;

void InitList(List *L_ptr);
void DestroyList(List *L_ptr);
// void ClearList(List *L_ptr);
int ListEmpty(List L);
int ListLength(List L);
int ListInsert(List *L_ptr, int i, Elmt e);
int ListTraverse(List L, int (* visit)(Elmt e));

#endif
