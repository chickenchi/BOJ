#include <stdio.h>
#include <stdlib.h>
typedef int element;

typedef struct {
	element data;
	struct Node* next;
} Node;

Node* insertFirst(Node* head, element data)
{
	Node* node = (Node*)malloc(sizeof(Node));
	node->data = data;
	if (head == NULL)
    {
		head = node;
		head->next = head;
    }
	else {
		node->next = head->next;
		head->next = node;
	}
	return head;
}
Node* insertLast(Node* head, element data)
{
	Node* node = (Node*)malloc(sizeof(Node));
	node->data = data;
	if (head == NULL)
    {
		head = node;
		head->next = head;
	}
	else {
		node->next = head->next;
		head->next = node; 	 
		head = node;
	}
	return head;
}

Node* changeCard(Node* head)
{
	Node* removed = head->next;
  head->next = removed->next;
	printf("%d ", removed->data);
	free(removed);
	return head->next;
}

int main()
{
	Node *head = NULL, *p;
	int n;
 	scanf("%d",&n);

	for(int i=1; i<=n; i++)
		head = insertLast(head, i);

	while(head->next != head)
	{
		head = changeCard(head);
	}
	 printf("%d", head->data);
	return 0;
}