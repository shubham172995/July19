#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, k;
	cin>>n>>k;
	vector<pair<int, int> > a(n);
	for(int i=0;i<n;i++){
		cin>>a[i].first>>a[i].second;
	}
	struct sort_pred {
    bool operator()(const std::pair<int,int> &left, const std::pair<int,int> &right) {
        return (left.first==right.first)?(left.second < right.second):(left.first>right.first);
    	}
	};
	sort(a.begin(), a.end(), sort_pred());
	/*for(int i=0;i<n;i++)
		cout<<a[i].first<<" "<<a[i].second<<endl;*/
	int count=0;
	for(int i=0;i<n;i++){
		if(a[i]==a[k-1])
			++count;
	}
	cout<<count<<endl;
	return 0;
}