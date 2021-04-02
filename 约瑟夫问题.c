//项目名称：约瑟夫问题
/* */ 
#include <stdio.h>// <stdio .h>头文件定义了三个变量类型、一些宏和各种函数来执行输入和输出。
                 //①库变量 ②库宏 ③库函数
#include <stdlib.h>//<stdlib .h>头文件定义了四个变量类型、一些宏和各种通用工具函数。
typedef struct node {//定义一个结构体，即一个空链表
    int number;
    struct node* next;//创建一个循环链表
}person;
person* initLink(int n) {
    int i = 0;
    person* head = NULL, * cyclic = NULL;
    head = (person*)malloc(sizeof(person));
    head->number = 1; 
    head->next = NULL;
    cyclic = head;
    for (i = 2; i <= n; i++) {
        person* body = (person*)malloc(sizeof(person));
        body->number = i;
        body->next = NULL;
        cyclic->next = body;
        cyclic = cyclic->next;
    }
    cyclic->next = head;//首尾相连
    return head;
}

void findAndKillK(person* head, int k, int m) {
    person* p = NULL;
    person* tail = head;//找到链表第一个结点的上一个结点，为删除操作做准备
    while (tail->next != head) {
        tail = tail->next;
    }
    p = head;//找到编号为k的人
    while (p->number != k) {
        tail = p;
        p = p->next;
    }
    //从编号为k的人开始，只有符合p->next==p时，说明链表中除了p结点，所有编号都出列了，
    while (p->next != p) {
        int i = 0;//找到从p报数1开始，报m的人，并且还要知道数m-1de人的位置tail，方便做删除操作。
        for (i = 1; i < m; i++) {
            tail = p;
            p = p->next;
        }
        tail->next = p->next;//从链表上将p结点摘下来
        printf("出列人的编号为:%d\n", p->number);
        free(p);
        p = tail->next;//继续使用p指针指向出列编号的下一个编号，游戏继续
    }
    printf("出列人的编号为:%d\n", p->number);
    free(p);
}

int main() {
    int n = 0, k = 0, m = 0;
    person* head = NULL;
    printf("输入圆桌上的人数:");
    scanf_("%d", &n);
    head = initLink(n);
    printf("从第几个人开始报数(k>1且k<%d)：", n);
    scanf_("%d", &k);
    printf("数到几的人出列：");
    scanf_("%d", &m);
    findAndKillK(head, k, m);
    return 0;
}

