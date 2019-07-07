#include<bits/stdc++.h>
using namespace std;

string convertToTitle(int A) {
    string ans="";
    while(A){
        int temp=A%26;
        char ch='A'+(temp==0?25:temp-1);
        ans=ch+ans;
        A=A/26;
    }
    return ans;
}

int main(){
    int A;
    cin>>A;
    string res=isPalindrome(A);
    cout<<res<<endl;
    return 0;
}
