#include<bits/stdc++.h>
using namespace std;

int titleToNumber(string A) {
    int n=A.length();
    int col=0;
    for(int i=n-1;i>=0;i--){
        int temp=0;
        temp+=A[i]-'A';
        temp+=1;
        col+=temp*(pow(26,n-1-i));
    }
    return col;
}

int main(){
	string s;
	cin>>s;
	int res=titleToNumber(s);
	cout<<res<<endl;
	return 0;
}