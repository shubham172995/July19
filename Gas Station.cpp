#include<bits/stdc++.h>
using namespace std;
int canCompleteCircuit(const vector<int> &A, const vector<int> &B) {
    std::vector<long long int> s(A.size());
    long long int sum=0;
    for(int i=0;i<A.size();i++){
        s[i]=A[i]-B[i];
        sum+=s[i];
    }
    if(sum<0){
        return -1;
    }
    int res=0;
    for(int i=0;i<A.size();){
        if(s[i]<0){
            i+=1;
            continue;
        }
        else{
            int temp=s[i], j=(i+1)%A.size();
            while(temp>=0&&j!=i){
                temp+=s[j];
                j=(j+1)%A.size();
            }
            if(temp>=0&&i==j){
                res=i;
                break;
            }
            else i=j;
        }
    }
    return res;
}

int main(){
    int n;
    scanf("%d", &n);
    vector<int> a(n), b(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        cin>>b[i];
    int result=canCompleteCircuit(a, b);
    cout<<result<<endl;
    return 0;
}