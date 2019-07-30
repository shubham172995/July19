#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	getline(cin, s);
	stack<string> words;
	int temp=0;
	for(int i=0;i<s.length();i++){
		if(s[i]==' '){
			words.push(s.substr(temp, i-temp));
			words.push(s.substr(i, 1));
			temp=i+1;
		}
		else if(i==s.length()-1){
			words.push(s.substr(temp, s.length()-temp));
		}
	}
	s="";
	while(words.size()){
		s+=words.top();
		words.pop();
	}
	cout<<s<<endl;
	return 0;
}