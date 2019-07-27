#include<bits/stdc++.h>
int main(){
	int n;
	bool flag=false;
	scanf("%d", &n);
	std::vector<int> a(3);
	for(int i=0;i<n;i++){
		int temp;
		scanf("%d", &temp);
		if(temp==25)
			++a[0];
		else if(temp==50){
			++a[1];
			--a[0];
		}
		else{
			--a[0];
			if(a[1])
				--a[1];
			else a[0]-=2;
		}
		if(a[0]<0||a[1]<0||a[2]<0)
			flag=true;
	}
	if(!flag)
		printf("YES\n");
	else printf("NO\n");
	return 0;
}