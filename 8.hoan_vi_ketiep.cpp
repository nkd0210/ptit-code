#include<bits/stdc++.h>
using namespace std;
void print(int n,int a[]){
	int i=n-1;
	while(i>=1 && a[i] > a[i+1]){
		--i;
	}
	if(i==0){
		for(int i=1; i<=n; i++){
			cout << i <<" ";
		}
	}else{
		int j=n;
		while(a[i] >a[j]){
			--j;
		}
		swap(a[i],a[j]);
		int left = i+1;
		int right = n;
		while(left < right){
			swap(a[left], a[right]);
			++left;
			--right;
		}
		for(int i=1; i<=n; i++){
			cout << a[i] <<" ";
		}
	}
}
int main(){
	int T;
	cin >> T;
	while(T--){
		int n, a[1000];
		cin >> n;
		for(int i=1; i<=n; i++){
			cin >> a[i];
		}
		print(n,a);
		cout << endl;
	}
}