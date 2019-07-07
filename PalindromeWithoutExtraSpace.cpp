#include<bits/stdc++.h>
using namespace std;

int isPalindrome(int A) {
    int i=1;
    while(A/i>=10){
        i*=10;
    }
    while(A){
        if(A/i!=A%10)
            return 0;
        A=(A%i)/10;
        i/=100;
    }
    return 1;
}

int main(){
    int A;
    cin>>A;
    int res=isPalindrome(A);
    cout<<res<<endl;
    return 0;
}
