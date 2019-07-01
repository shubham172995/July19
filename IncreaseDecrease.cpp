#include<bits/stdc++.h>
int main(){
	int n ;
	scanf("%d", &n);
	long int sum=0;
	std::vector<int> a(n);
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
		sum+=a[i];
	}
	int res=n-1;
	if(sum%n==0)
		res=n;
	std::cout<<res<<std::endl;
	return 0;
}