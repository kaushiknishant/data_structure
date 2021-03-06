// singlyLinkedList.cpp : This file contains the 'main' function. Program execution begins and ends there.
  
/* reference book : data structures and algorithmsmade easy by narasimha karumanchi      */
//some bug in the program but it works



#include "pch.h"
#include <iostream>

#include<string>

using namespace std;

// structure 

struct ListNode {
	int data;
	struct ListNode *next;
};

// This function return number of nodes present in linkedlist

int ListLength(struct ListNode *head) {
	struct ListNode *current = head;
	int count = 0;
	while (current != NULL) {
		count++;
		current = current->next;
	}
	return count;
}

// this function is used for inseting data at any position you want

void InsertInLinkedList(struct ListNode **head, int data, int position) {
	int k = 1;
	struct ListNode *p, *q = NULL, *newNode;
	newNode = new ListNode;

	if (!newNode) {
		cout << "Memory Error";
		return;
	}
	newNode->data = data;
	cout << newNode->data << endl;
	p = *head;
	
	// Inserting at the beginning

	if (position == 1) {
		newNode->next = p;
		*head = newNode;
	}
	else {
		// Trraverse the list until the position where we want to insert

		while ((p != NULL) && (k < position)) {
			k++;
			q = p;
			p = p->next;
		}
		q->next = newNode;
		newNode->next = p;
	}
}

// Function to delete node 

void DeleteNodeFromLinkedList(struct ListNode **head, int position)
{
	int k = 1;
	struct ListNode *p, *q = NULL;

	if (*head == NULL) {
		cout << "List Empty";
		return;
	}
	p = *head;

	/*from beginning */
	if (position == 1) {
		*head = (*head)->next;
		free(p);
		return;
	}
	else {
		// Traverse the list until arriving at the position from which we want to delete

		while ((p != NULL) && (k < position)) {
			k++;
			q = p;
			p = p->next; 
		}
		if (p == NULL)
			cout << "position doesn't exist";
		else {
			q->next = p->next;
			free(p);
		}
	}
}
int main()
{

	struct ListNode* head = NULL;
	
	InsertInLinkedList(&head, 1,1);
	InsertInLinkedList(&head, 3,2);
	InsertInLinkedList(&head, 1,3);
	InsertInLinkedList(&head, 2,4);
	InsertInLinkedList(&head, 1,5);
	DeleteNodeFromLinkedList(&head, 2);
	
    
	cout << "Number of nodes present is " << ListLength(head);

	return 0;
}

