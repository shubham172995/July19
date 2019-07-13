#include<bits/stdc++.h>
using namespace std;

int isPower(int A) {
    if(A==0)
    return 0;
    else if(A==1)
    return 1;
    else
    {
        for(int i=2;i<=A;i++)
        {
            int c=log(A)/log(i);
            if((pow(i,c)==A)&&(c>1))
            return 1;
        }
    }
    return 0;
}


int main(){
	int a;
	cin>>a;
	int res=isPower(a);
	cout<<res<<endl;
	return 0;
}