#include <stdio.h>
#include <stdlib.h>

//定义一个类型的新名
typedef char datatype;
//单链表结构体
typedef struct node {
	datatype data;
	struct node* next;
}linklist;

linklist* CreatListR() {
	//带头结点的尾插法，返回单链表的头指针
	linklist* head, * p, * r;
	datatype ch;
	head = (linklist*)malloc(sizeof(linklist));//产生头结点
	head->next = NULL;
	r = head;//r指针指向头结点
	while ((ch = getchar()) != '\n') {
		p = (linklist*)malloc(sizeof(linklist));//生成新结点
		p->data = ch;//对结点的数据域进行赋值
		r->next = p;//新结点指向表尾
		r = p;//r指针指向新表尾
	}
	r->next = NULL;
	return head;
}
//主函数
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