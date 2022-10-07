#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node *link;
};
void main()
{
	struct Node *temp,*p,*lastNode;
	p=NULL;
	int count=0;
	
	temp=(struct Node*)malloc(sizeof(struct Node));  //New node address stored in temp
	temp->data=10;                                   // node data has 10 stored in it
	temp->link=NULL;                                 // node address part is null
	p=temp;                                          //address of node is stored in p 
	lastNode=temp;                                   //for backup address
	
	
	temp=(struct Node*)malloc(sizeof(struct Node));  // Creating new node ,previous adress of temp will be replaced with new one
	temp->data=20;                                   //new node's data part has 20 stored in it
	temp->link=NULL;                                 //new node's address part is NULL
	lastNode->link=temp;                             //here we will send the address of new node and put it in previous node's address part
	lastNode=temp;                                   //we will take new node's address as backup
	
	// Moving this node to 1st position
	
	temp=(struct Node*)malloc(sizeof(struct Node)); 
	temp->data=5;
	temp->link=NULL;
	temp->link=p;
	p=temp;
	
	temp=(struct Node*)malloc(sizeof(struct Node)); 
	temp->data=30;
	temp->link=NULL;
	lastNode->link=temp;
	lastNode=temp;
	temp=p;
	printf("**************************************");
	printf("\nLinked List Elements are : ");
	while(temp!=NULL)
	{
		count++;
		printf("%i\t",temp->data);
		temp=temp->link;
	}
	printf("\n\n**************************************");
	printf("\nTotal Nodes = %i",count);
	printf("\n\n**************************************");                                   
}
