#include<bits/stdc++.h>
using namespace std;


int coverPoints(vector<int> &A, vector<int> &B) {
    int n=A.size();
    int steps=0;
    for(int i=1;i<n;i++){
        int x, y;x=y=0;
        x=abs(A[i]-A[i-1]);
        y=abs(B[i]-B[i-1]);
        steps+=(x>y)?x:y;
    }
    return steps;
}



int main(){
    int n;
    cin>>n;
    vector<int> a(n), b(n);
    for(int i=0;i<n;i++)
        cin>>a[i]>>b[i];
    int result=coverPoints(a);
    cout<<result;
    return 0;
}
