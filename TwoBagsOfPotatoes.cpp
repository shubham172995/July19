#include<bits/stdc++.h>
int main(){
	long long int y, k, n;
	std::cin>>y>>k>>n;
	long long int total=0, temp=0;
	temp=y+(k-(y%k));
	for(long long int i=temp;i<=n;i+=k){
		++total;
		std::cout<<i-y<<" ";
	}
	if(total==0)
		std::cout<<"-1\n";
	else std::cout<<"\n";
	return 0;
}