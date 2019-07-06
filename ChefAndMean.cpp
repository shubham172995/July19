#include<bits/stdc++.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long int n;
		std::cin>>n;
		double mean=0;
		std::vector<long long int> a(n);
		for(long int i=0;i<n;i++){
			std::cin>>a[i];
			mean+=a[i];
		}
		mean/=n;
		bool flag=false;
		for(long int i=0;i<n;i++){
			if(mean==a[i]){
				printf("%ld\n", i+1);
				flag=true;
				break;
			}
		}
		if(!flag) printf("Impossible\n");
	}
	return 0;
}