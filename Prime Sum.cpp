#include<bits/stdc++.h>
vector<int> primesum(int A) {
   int n=A;
   vector<char> is_prime(n+1, true);
   is_prime[0] = is_prime[1] = false;
   for (int i = 2; i <= n; i++) {
       if (is_prime[i] && (long long)i * i <= n) {
           for (int j = i * i; j <= n; j += i)
               is_prime[j] = false;
       }
   }
   vector<int> ans;
   for(int i=2;i<=n;i++){
      if(is_prime[i]&&is_prime[A-i]){
           ans.push_back(i);
           ans.push_back(A-i);
           break;        }
    }
    return ans;
}



int main(){
	int n;
	scanf("%d", &n);
	int ans=primesum(n);
	cout<<ans[0]<<" "<<ans[1]<<endl;
return 0;
}