#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *next;
};
int main()
{
	int i,n,element,position,choice;
	struct node *temp,*p,*endnode,*startnode,*newnode;
	i=1;
	printf("\n Enter number of nodes");
	scanf("%d",&n);
	printf("\n Enter a node %d ",i);
	scanf("%d",&element);
	startnode=(struct node *)malloc(sizeof(struct node));
	startnode->data=element;
	//startnode->next=NULL;
	endnode=startnode;
	for(i=2;i<=n;i++)
	{
	printf("\n Enter a node %d ",i);
	scanf("%d",&element);
	newnode=(struct node *)malloc(sizeof(struct node));
	newnode->data=element;
	//newnode->next=NULL;
	endnode->next=newnode;
	//move the previous node ahead
	endnode=newnode;
		}
		endnode->next=startnode;
		//Traverse
		p=startnode;
		if(p!=NULL)
		{
		do
		{
			printf("%d",p->data);
			p=p->next;
		}
		while(p!=startnode);
	}
	printf("\n Insertion & deletion");
	printf("\n 1 Ibegining");
	printf("\n 2 Ilast");
	printf("\n 3 IAny position");
	printf("\n 4 Dbegining");
	printf("\n 5 Dlast");
	printf("\n 6 DAny position");
	printf("\nEnter a choice");
	scanf("%d",&choice);
	switch(choice)	
	{
		case 1:
			printf("\n Enter an element");
			scanf("%d",&element);
			newnode=(struct node *)malloc(sizeof(struct node));
			newnode->data=element;
			newnode->next=startnode;
			endnode->next=newnode;
			startnode=newnode;
			//p=startnode;
			//while(p->next!=startnode)
			//{
			//	p=p->next;
			//}
			//p->next=newnode;
			//startnode=newnode;
			break;
			case 2:
				printf("\n Enter an element");
				scanf("%d",&element);
				newnode=(struct node *)malloc(sizeof(struct node));
			newnode->data=element;
			endnode->next=newnode;
			newnode->next=startnode;
			newnode=endnode;
			break;
			case 3:
				printf("\n Enter an element");
				scanf("%d",&element);
				printf("\n Enter the position");
				scanf("%d",&position);
				newnode=(struct node *)malloc(sizeof(struct node));
			newnode->data=element;
				p=startnode;
				for(i=1;i<position-1;i++)
				{
					//temp=p;
					p=p->next;
				}
				newnode->next=p->next;
				p->next=newnode;
				break;
				case 4:
				p=startnode;
				startnode=startnode->next;
				endnode->next=startnode;
				free(p);
				break;
				case 5:
				p=startnode;
				while(p->next!=startnode)	
				{
					temp=p;
					p=p->next;
				}
				temp->next=startnode;
				free(p);
				break;
				case 6:
					printf("\n Eneter the position");
					scanf("%d",&position);
					p=startnode;
					for(i=1;i<position;i++)
					{
						temp=p;
						p=p->next;
					}
					temp->next=p->next;
					break;
					deafault:
						printf("\n Wrong choice");
				}
				//Traverse
		p=startnode;
		//if(p!=NULL)
		//{
		do
		{
			printf("%d",p->data);
			p=p->next;
		}
		while(p!=startnode);
	//}		
}
