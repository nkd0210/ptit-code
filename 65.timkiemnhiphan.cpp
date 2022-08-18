#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool bns(ll n, ll k, ll a[]){
	ll left = 0;
	ll right = n-1;
	while(left <= right){
		ll mid = (left+right)/2;
		if(mid==k){
			return true;
		}else if(mid < k){
			right = mid - 1;
		}else if(mid > k){
			left = mid + 1;
		}
	}
	return false;
}
int main(){
	int T;
	cin >> T;
	while(T--){
		ll n,k,a[n];
		cin >> n >> k;
		for(int i=0; i<n; i++){
			cin >> a[i];
		}
		for(int i=0; i<n; i++){
			if(bns(n,k,a)){
				cout << i << endl;
 			}else{
				cout <<"NO"<< endl;
			}
		}
	}
}