#include<bits/stdc++.h>
using namespace std;


vector<string> fizzBuzz(int A) {
    vector<string> str(A);
    for(int i=1;i<=A;i++){
        if(i%3!=0&&i%5!=0)
            str[i-1]=to_string(i);
        else if(i%3==0&&i%5!=0)
            str[i-1]="Fizz";
        else if(i%3!=0&&i%5==0)
            str[i-1]="Buzz";
        else
            str[i-1]="FizzBuzz";
    }
    return str;
}



int main(){
	int a;
	scanf("%d", &a);
	int res=fizzBuzz(a);
	cout<<res<<endl;
	return 0;
}