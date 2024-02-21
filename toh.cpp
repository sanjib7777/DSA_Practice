#include<stdio.h>
void tower(int n,char from,char tmp,char to){
	if(n>=1){
		tower(n-1,from,to,tmp);
		printf("\n%c -> %c",from,to);
		tower(n-1,tmp,from,to);
	}
}
int main(){
	int n;
	printf("enter disc");
	scanf("%d",&n);
	tower(n,'A','B','C');
	return 0;
}
