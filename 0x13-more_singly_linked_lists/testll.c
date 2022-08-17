#include<stdio.h>
#include<stdlib.h>

/**
 * node - node def
 */

int main ()
{
	struct node
	{
		int val;
		struct node* next;
	};
	
	struct node* head = malloc(sizeof(struct node));
	struct node* second = malloc(sizeof(struct node));
	struct node* third = malloc(sizeof(struct node));
	struct node* temp = head;

	head->val = 12;
	second->val = 14;
	third->val = 16;

	head->next = second;
	second->next = third;
	third->next = NULL;

	while(temp != NULL)
	{
		printf("%d->",temp->val);
		temp = temp->next;
	}
	printf("end\n");
	return (0);
}
