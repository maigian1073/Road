//��Ŀ���ƣ�Լɪ������
/* */ 
#include <stdio.h>// <stdio .h>ͷ�ļ������������������͡�һЩ��͸��ֺ�����ִ������������
                 //�ٿ���� �ڿ�� �ۿ⺯��
#include <stdlib.h>//<stdlib .h>ͷ�ļ��������ĸ��������͡�һЩ��͸���ͨ�ù��ߺ�����
typedef struct node {//����һ���ṹ�壬��һ��������
    int number;
    struct node* next;//����һ��ѭ������
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
    cyclic->next = head;//��β����
    return head;
}

void findAndKillK(person* head, int k, int m) {
    person* p = NULL;
    person* tail = head;//�ҵ������һ��������һ����㣬Ϊɾ��������׼��
    while (tail->next != head) {
        tail = tail->next;
    }
    p = head;//�ҵ����Ϊk����
    while (p->number != k) {
        tail = p;
        p = p->next;
    }
    //�ӱ��Ϊk���˿�ʼ��ֻ�з���p->next==pʱ��˵�������г���p��㣬���б�Ŷ������ˣ�
    while (p->next != p) {
        int i = 0;//�ҵ���p����1��ʼ����m���ˣ����һ�Ҫ֪����m-1de�˵�λ��tail��������ɾ��������
        for (i = 1; i < m; i++) {
            tail = p;
            p = p->next;
        }
        tail->next = p->next;//�������Ͻ�p���ժ����
        printf("�����˵ı��Ϊ:%d\n", p->number);
        free(p);
        p = tail->next;//����ʹ��pָ��ָ����б�ŵ���һ����ţ���Ϸ����
    }
    printf("�����˵ı��Ϊ:%d\n", p->number);
    free(p);
}

int main() {
    int n = 0, k = 0, m = 0;
    person* head = NULL;
    printf("����Բ���ϵ�����:");
    scanf_("%d", &n);
    head = initLink(n);
    printf("�ӵڼ����˿�ʼ����(k>1��k<%d)��", n);
    scanf_("%d", &k);
    printf("���������˳��У�");
    scanf_("%d", &m);
    findAndKillK(head, k, m);
    return 0;
}

