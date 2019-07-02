#include<bits/stdc++.h>
int main(){
	int n;
	scanf("%d", &n);
	std::string s;
	std::cin>>s;
	std::vector<char> a(n), b(n);
	for(int i=0;i<n;i++){
		a[i]=s[i];
		b[i]=s[i+n];
	}
	std::sort(a.begin(), a.end());
	std::sort(b.begin(), b.end());
	bool flag=false;
	if(a[0]==b[0]){
		printf("NO\n");
		return 0;
	}
	else if(a[0]>b[0]){
		for(int i=1;i<n;i++){
			if(a[i]<=b[i]){
				flag=true;
				printf("NO\n");
				return 0;
			}
		}
		if(!flag){
			printf("YES\n");
			return 0;
		}
	}
	else{
		for(int i=1;i<n;i++){
			if(a[i]>=b[i]){
				flag=true;
				printf("NO\n");
				return 0;
			}
		}
		if(!flag){
			printf("YES\n");
			return 0;
		}
	}
}