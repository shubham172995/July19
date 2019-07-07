#include<bits/stdc++.h>
int main(){
	int n;
	scanf("%d", &n);
	int ans=0;
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			long int temp=sqrt(i*i+j*j);
			if(temp==sqrt(i*i+j*j)&&temp<=n)
				++ans;
		}
	}
	printf("%d\n", ans);
	return 0;
}