#include<bits/stdc++.h>
using namespace std;


int hammingDistance(const vector<int> &A) {
    int n=A.size();
    vector<string> bits(n);
    int max=0;
    for(int i=0;i<n;i++){
        int temp=A[i];
        while(temp){
            int k=temp%2;
            char ch='0'+k;
            temp/=2;
            bits[i]=ch+bits[i];
        }
        max=max>bits[i].length()?max:bits[i].length();
    }
    for(int i=0;i<n;i++){
        if(bits[i].length()<max){
            int temp=max-bits[i].length();
            for(int j=0;j<temp;j++)
                bits[i]='0'+bits[i];
        }
    }
    int diff=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(bits[i].length()<bits[j].length()){
                diff+=bits[j].length()-bits[i].length();
                int k=0;
                for(k=0;k<bits[i].length();k++){
                    if(bits[i][k]!=bits[j][k]){
                        ++diff;
                    }
                }
            }
            else{
                diff+=bits[i].length()-bits[j].length();
                int k=0;
                for(k=0;k<bits[j].length();k++){
                    if(bits[i][k]!=bits[j][k]){
                        ++diff;
                    }
                }
            }
        }
    }
    return diff;
}



int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    int res=hammingDistance(a);
    cout<<res<<endl;
    return 0;
}