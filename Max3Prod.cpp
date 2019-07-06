#include<bits/stdc++.h>
using namespace std;
long int maxp3(vector<int> &A) {
    sort(A.begin(), A.end());
    int n=A.size();
    if(A[n-1]<=0){
        for(int i=0;i<n;i++){
            if(A[i]==0){
                return 0;
                break;
            }
        }
        return A[n-1]*A[n-2]*A[n-3];
    }
    else{
        long int prod=0;
        prod=A[n-1]*A[n-2]*A[n-3];
        prod=prod>(A[n-1]*A[1]*A[0])?prod:(A[n-1]*A[n-2]*A[0]);
        return prod;
    }
}

int main(){
    int n;
    scanf("%d", &n);
    vector<int> a(n);
    for(int i=0;i<n;i++)
        scanf("%d", &a[i]);
    long int result=maxp3(a);
    cout<<result<<endl;
    return 0;
}
