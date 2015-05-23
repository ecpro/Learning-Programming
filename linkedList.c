	#include<stdio.h>
#include<malloc.h>

struct node {
	int data;
	struct node* next;
};


void insert(struct node **);
void traverse(struct node*);
void insert_at_position(struct node**,int);
void delete(struct node**);
int main()
{
	struct node* head=NULL;
	insert(&head);
	traverse(head);

	insert_at_position(&head,7);

	traverse(head);



	return 0;
}


void insert(struct node **head)
{
	int n,data;
	printf("how many nodes?");
	scanf("%d",&n);

	for(int i=0;i<n;i++)
	{
		printf("enter data ");
		scanf("%d",&data);

		struct node * newNode=(struct node*)malloc(sizeof(struct node*));
		newNode->data=data;
		newNode->next=NULL;

		if(*head==NULL)
		{
			*head=newNode;
		}
		else
		{
			struct node* curr=*head;
			while(curr->next!=NULL)
			{
				curr=curr->next;
			}
			curr->next=newNode;
			newNode->next=NULL;
		}
	}
}

void traverse(struct node* head)
{
	struct node* curr=head;
	while(curr!=NULL)
	{
		printf("%d",curr->data);
		curr=curr->next;
	}
}


void insert_at_position(struct node**head,int position)
{
	struct node* newNode=(struct node*)malloc(sizeof(struct node));
	int data;
	printf("\n enter the data");
	scanf("%d",&data);
	newNode->data=data;

	if(*head==NULL)
	{
		*head=newNode;
		newNode->next=NULL;
	}

	if(position==1)
	{
		struct node *curr=*head;
		newNode->next=curr;
		*head=newNode;
	}

	else
	{
		struct node *curr=*head;
		int pos=1;

		while(pos<position-1 && curr->next!=NULL)
		{
			pos++;
			curr=curr->next;

		}

		if(curr->next==NULL)
		{
			free(newNode);
			printf("no such position");
			return;
		}

		newNode->next=curr->next;
		curr->next=newNode;

	}
}


void delete(struct node** head)
{
	if(*head!=NULL)
	{
		struct node* curr=*head;
		curr=curr->next;
		*head=curr;
		printf("one link deleted");
	}

}

void delete(struct node** head)
{
	
}