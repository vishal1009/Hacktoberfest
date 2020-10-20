#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*next;
	
};
struct node*head;
void insert_head(int x){
	struct node*temp=(struct node*)malloc(sizeof(struct node));
	temp->data=x;
	temp->next=head;
	head=temp;
}
void print(){
	struct node*temp=head;
	printf("linked list: ");
	while(temp!=NULL){
		printf("%d ",temp->data);
		temp=temp->next;
	}
	printf("\n");
	
}
void insert_end(int x){
	
	struct node*temp=(struct node*)malloc(sizeof(struct node));
	while(head->next!=NULL){
		head=head->next;
		
		
	}
	temp->data=x;
	head->next=temp;
	temp->next=NULL;
	
	head=temp;
}
int main(){
	head=NULL;
	int n,x,i;
	printf("how many node you want to add in linkedlist\n");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("Enter a number\n");
		scanf("%d",&x);
		insert_head(x);
	    
	    print();
	};
	insert_end(10);
	print();
	
}
