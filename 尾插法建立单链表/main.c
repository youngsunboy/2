#include <stdio.h>
#include <stdlib.h>

//����һ�����͵�����
typedef char datatype;
//������ṹ��
typedef struct node {
	datatype data;
	struct node* next;
}linklist;

linklist* CreatListR() {
	//��ͷ����β�巨�����ص������ͷָ��
	linklist* head, * p, * r;
	datatype ch;
	head = (linklist*)malloc(sizeof(linklist));//����ͷ���
	head->next = NULL;
	r = head;//rָ��ָ��ͷ���
	while ((ch = getchar()) != '\n') {
		p = (linklist*)malloc(sizeof(linklist));//�����½��
		p->data = ch;//�Խ�����������и�ֵ
		r->next = p;//�½��ָ���β
		r = p;//rָ��ָ���±�β
	}
	r->next = NULL;
	return head;
}
//������
int main() {
	linklist* head = (linklist*)malloc(sizeof(linklist));
	linklist* p = (linklist*)malloc(sizeof(linklist));
	head = CreatListR();
	p = head->next;
	while (p != NULL) {
		printf("%c", p->data);
		p = p->next;
	}
	system("pause");
	return 0;
}