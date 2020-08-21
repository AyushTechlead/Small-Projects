#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node* link;
};
struct node* push(struct node* head,int item);
struct node* pop(struct node* head);
struct node* sort(struct node* head);
		void print(struct node* head);
struct node* reverse(struct node* head);		
int main(){
	struct node* head=NULL;
	int choice=1,op,item;
	while(choice){
		printf("\n1.push\n2.pop\n3.print\n4.sort\n5.reverse\n");
		scanf("%d",&op);
		switch(op){
			case 1:
				printf("\nEnter item\n");
				scanf("%d",&item);
				head=push(head,item);
				break;
			case 2:
				head=pop(head);
				break;	
			case 3:
				print(head);
				break;
			case 4:
				head=sort(head);
				break;	
			case 5:
				head=reverse(head);
				break;		
		}
		printf("\nEnter again\n");
		scanf("%d",&choice);
	}
return 0;
}

struct node* push(struct node* head,int item){
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	temp->data=item;
	temp->link=head;
	head=temp;
	return head;
}

struct node* pop(struct node* head){
	head=head->link;
	return head;
}
struct node* sort(struct node* head){
	struct node* temp=head,*temp1=head,sort;
	while(temp!=NULL){
		temp1=head;
		while(temp1!=NULL){
			if(temp1->data>temp->data)
				{
					sort.data=temp1->data;
					temp1->data=temp->data;
					temp->data=sort.data;
				}
			temp1=temp1->link;
		}
		temp=temp->link;
	}
	return head;
}

void print(struct node* head){
	struct node* temp=head;
	while(temp!=NULL){
		printf("%d -> ",temp->data);
		temp=temp->link;
	}
	printf("NULL");
}

struct node* reverse(struct node* head){
	struct node *prev=NULL,*next,*current;
	current=head;
	while(current!=NULL){
		next=current->link;
		current->link=prev;
		prev=current;
		current=next;
	}
	head=prev;
}
