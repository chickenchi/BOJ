#include <iostream>
#include <stdlib.h>

using namespace std;

typedef struct Node {
	int value;
	struct Node* next;
} Node;

void deleteCLL(Node* head)
{
	Node* removed = head -> next;
	head -> next = removed -> next;
	free(removed);
}

void printCLL(Node* head, int length, int deleteTime)
{
	if(!head) return;

	int chain = 1, stack = 0, noNext = 1;
	cout << '<';
	do
	{
		if(noNext != 1) head = head -> next;
		else noNext = 0;
		if(chain % deleteTime == 0)
		{
			if(stack++ == length) break;
		 	if(!head) break;
		 	cout << head -> next -> value;
			if(stack != length) cout << ", ";
		 	deleteCLL(head);
			noNext = 1;
		}
		chain++;
	} while(head);
	cout << '>';
}

Node* InsertLast(Node* head, int value)
{
	Node* NewNode = (Node*)malloc(sizeof(Node));
	NewNode -> value = value;

	if(!head)
	{
		head = NewNode;
		head -> next = NewNode;
	}
	else
	{
		NewNode -> next = head -> next;
		head -> next = NewNode;
		head = NewNode;
	}
	return head;
}

int main()
{
	Node* head = NULL;

	int a, b;

	cin >> a >> b;

	for(int i=1; i<=a; i++) head = InsertLast(head, i);

	printCLL(head, a, b);

	return 0;
}