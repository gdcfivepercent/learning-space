#include <stdlib.h>

#include "sequence-list.h"

void InitList(List *L_ptr)
{
    Elmt *head;
    head = (Elmt *)malloc(sizeof(Elmt) * MAX_LENGTH);
    L_ptr->head = head;
    L_ptr->length = 0;
}

void DestroyList(List *L_ptr)
{
    free(L_ptr->head);
}

void ClearList(List *L_ptr)
{
    L_ptr->length = 0;
}

int ListEmpty(List L)
{
    if (L.length == 0) {
        return TRUE;
    }
    return FALSE;
}

int ListLength(List L)
{
    return L.length;
}

void GetELmt(List L, int i, Elmt *e)
{
    *e = *(L.head+i-1);
}

int ListInsert(List *L_ptr, int i, Elmt e)
{
    if (L_ptr->length == MAX_LENGTH) {
        return LIST_FULL;
    }

    if (L_ptr->length == 0) {
        *(L_ptr->head) = e;
        L_ptr->length++;
    } else {
        int j;
        for (j = L_ptr->length; j >= i; j--) {
            *(L_ptr->head+j) = *(L_ptr->head+j-1);
        }
        *(L_ptr->head+j) = e;
        L_ptr->length++;
    }

    return SUCCESS;
}

int ListTraverse(List L, int( *visit)(Elmt e))
{
    if (L.length > 0) {
        int i;
        int ret;
        Elmt e;
        for (i = 1; i <= L.length; i++ ) {
            GetELmt(L, i, &e);
            ret = visit(e);
            if (ret < 0) {
                return ret;
            }
        }
    }

    return SUCCESS;
}
