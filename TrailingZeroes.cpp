#include<bits/stdc++.h>
using namespace std;

int trailingZeroes(int A) {
    int ans=0;
    int n=1;
    bool flag=true;
    while(flag){
        long int temp=pow(5, n);
        if(A/temp==0)break;
        if(A/temp){
            ans+=A/temp;
        }
        ++n;
    }
    return ans;
}

int main(){
    int a;
    scanf("%d", &a);
    int res=trailingZaroes(a);
    cout<<res<<endl;
    return 0;
}