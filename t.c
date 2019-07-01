#include<stdio.h>

int main(){
	const int a=10;
	int *b=(int*)&a;
	*b=12;
	printf("%d\n", a);
	//cout<<*b<<endl<<b<<endl;
	return 0;
}