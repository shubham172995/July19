#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main(){
	int n;
	ifstream input;
	input.open("input.txt");
	ofstream output;
	output.open("output.txt");
	input>>n;
	vector<int> a(5005);
	vector<vector<int> > b(5005);
	for(int i=0;i<2*n;i++){
		int temp;
		input>>temp;
		++a[temp];
		b[temp].push_back(i+1);
	}
	for(int i=0;i<5005;i++){
		if(a[i]%2!=0){
			output<<"-1\n";
			return 0;
		}
	}
	for(int i=0;i<5005;i++){
		for(int j=0;j<b[i].size();j+=2){
			output<<b[i][j]<<" "<<b[i][j+1]<<endl;
		}
	}
	input.close();
	output.close();
	return 0;
}