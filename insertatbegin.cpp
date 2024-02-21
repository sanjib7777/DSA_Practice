#include <stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *start;

int atbegin(int x){
	struct node *newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=x;
	if(start==NULL){
		newnode->next=NULL;
		start=newnode;
	}
	else{
		newnode->next=start;
		start=newnode;
	}
}
void display(){
	struct node *temp;
	temp=start;
	while(temp!=NULL){
		printf("%d",temp->data);
		temp=temp->next;
		printf("\n");
		
	}
}
int main(){
	atbegin(10);
	atbegin(20);
	atbegin(30);
	printf("list is ");
	display();
}
