/**
 * linear list test program
 * 线性表测试程序
 *
 * 测试步骤：
 *   初始化线性表 L，
 *   依次添加 3 个数据元素，
 *   获取长度，
 *   再依次输出各数据元素的值。
 */

#include <stdio.h>

#include "sequence-list.h"

int PrintElmt(Elmt e);

int
main(void)
{
    List L;

    InitList(&L);

    printf("List length is: %d\n", ListLength(L));

    Elmt x = 5;
    ListInsert(&L, 1, x);
    x = 6;
    ListInsert(&L, 1, x);
    x = 7;
    ListInsert(&L, 1, x);

    printf("List length is: %d\n", ListLength(L));

    printf("\n");

    // 函数指针的用法
    ListTraverse(L, &PrintElmt);

    DestroyList(&L);

    return 0;
}

int PrintElmt(Elmt e)
{
    printf("%d\n", e);
    return 0;
}
