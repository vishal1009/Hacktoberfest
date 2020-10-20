#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*next;
};

struct node*push(struct node*top,int data){
	
	struct node*ptr=(struct node*)malloc(sizeof(struct node));
	ptr->data=data;
	ptr->next=top;
	return ptr;
	
}
void transversal(struct node*top){
	while(top!=NULL){
		printf("%d\n",top->data);
		top=top->next;
	}
}

struct node*pop(struct node*top){
	if(top==NULL){
		printf("Stack Is Empty so you can't add node");
		return 0;
	}
	else{
		struct node*ptr=top;
		top=top->next;
		free(ptr);
		return(top);
		
		
	}
}
void is_empty(struct node*ptr){
	if(ptr==NULL){
		printf("stack is empty\n");
		
	}
	else{
		printf("stack is not empty");
	}
}
int stack_top(struct node*top){
	if(top==NULL){
		printf("stack is empty\n");
		
	}
	else{
		return(top->data);
	}
	
}
int stack_bottom(struct node*top){
	if(top==NULL){
		printf("stack is empty\n");
		
	}
	else{
		while(top->next!=NULL){
			top=top->next;
		}
		return(top->data);
	}
	
}
int peak(struct node*top,int pos){
	for(int i=0;i<pos-1&&top!=NULL;i++){
		top=top->next;
	}
	if(top!=NULL){
		return(top->data);
	}
	else{
		return(-1);
	}
}

int main(){
	struct node* top;
	top=push(top,5);
	top=push(top,15);
	top=push(top,25);
	top=push(top,35);
	top=push(top,45);
	
//	top=pop(top);
//	top=pop(top);
	
//	top=push(top,6);
//	transversal(top);
//	top=pop(top);
//	transversal(top);
//    is_empty(top);
//    printf("%d\n",stack_top(top));
//    printf("%d\n",stack_bottom(top));

for (int i=1;i<=5;i++ )  {
 printf("%d\n",peak(top,i));
	
}
}
