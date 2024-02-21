#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *head=NULL;
struct node *tail=NULL;
struct node *newnode=NULL;
void create(int x){
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=x;
	newnode->next=NULL;
	if(head==NULL && tail==NULL){
		head=newnode;
		tail=newnode;
	}
	else{
		tail->next=newnode;
		tail=newnode;
	}
}
void display(){
	struct node *tmp=head;
	while(tmp!=NULL){
		printf("%d\n",tmp->data);
		tmp=tmp->next;
	}
}
int main(){
	create(11);
	create(22);
	create(33);
	display();
	return 0;
}

