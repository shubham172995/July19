#include<bits/stdc++.h>
int main(){
	int n;
	scanf("%d", &n);
	int sum=0, suma=0, sumb=0;
	std::vector<int> a(n), b(n);
	for(int i=0;i<n;i++){
		std::cin>>a[i]>>b[i];
		sum+=a[i]+b[i];
		suma+=a[i];
		sumb+=b[i];
	}
	if(sum%2!=0)
		printf("-1\n");
	else{
		if(suma%2==0)
			printf("0\n");
		else{
			bool flag=false;
			for(int i=0;i<n;i++){
				if(a[i]%2==0&&b[i]%2!=0){
					printf("1\n");
					flag=true;
					break;
				}
				else if(a[i]%2!=0&&b[i]%2==0){
					printf("1\n");
					flag=true;
					break;
				}
			}
			if(!flag)
				printf("-1\n");
		}
	}
	return 0;
}