#include<bits/stdc++.h>
using namespace std;
int bulbs(vector<int> &A) {
    int n=A.size();
    int count=0;
    if(n==0){
        return 0;
    }
    if(A[0]==0){
        count=1;
    }
    for(int i=0;i<n-1;i++){
        if(A[i]!=A[i+1]){
            ++count;
        }
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    int result=bulbs(a);
    cout<<result;
    return 0;
}
