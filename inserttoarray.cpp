#include<stdio.h>
int main(){
	int a[100]={1,2,3,4,5,6,7,8,9,10};
	int pos,n;
	printf("enter a number to add:");
	scanf("%d",&n);
	printf("enter the position:");
	scanf("%d",&pos);
	for(int i=10;i>=pos;i--){
		a[i]=a[i-1];
	}
	a[pos-1]=n;
	printf("new array is :");
	for(int i=0;i<=10;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
