#include<bits/stdc++.h>
using namespace std;

int gcd(int A, int B) {
    if(B){
        return gcd(B, A%B);
    }
    else
        return A;
}

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	int res=gcd(a, b);
	cout<<res<<endl;
	return 0;
}