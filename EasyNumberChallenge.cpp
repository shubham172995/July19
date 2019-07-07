#include<bits/stdc++.h>
#define maxn 1000000
std::vector<int> A(maxn+2);
int main(){
 	for(int i=1;i<=maxn;i+=1)
 		for(int j=i;j<=maxn;j+=i)
 			A[j]++;
   	int a,b,c,ans=0;
   	scanf("%d%d%d",&a,&b,&c);
   	for(int i=1;i<=a;i+=1)
   		for(int j=1;j<=b;j+=1)
   			for(int k=1;k<=c;k+=1)
   				if(i*j*k<=maxn)ans+=A[i*j*k];
   	printf("%d",ans);
   	return 0;
}