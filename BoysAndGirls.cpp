#include<bits/stdc++.h>
int main(){
	std::ifstream in("input.txt");
    std::ofstream out("output.txt");
	int n, m;
	in>>n>>m;
	if(n==m){
		for(int i=0;i<n;i++)
			out<<"BG";
		out<<"\n";
	}
	else if(n<m){
		for(int i=0;i<n;i++)
			out<<"GB";
		for(int i=0;i<(m-n);i++)
			out<<"G";
		out<<"\n";
	}
	else{
		for(int i=0;i<m;i++)
			out<<"BG";
		for(int i=0;i<(n-m);i++)
			out<<"B";
		out<<std::endl;
	}
	return 0;
}