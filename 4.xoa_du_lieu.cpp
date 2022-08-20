#include<bits/stdc++.h>
using namespace std;
list<int>a;
int main(){
	int n,k,tmp;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> tmp;
		a.push_back(tmp);
	}
	cin >> k;
	a.remove(k);
	for(auto x:a){
		cout << x <<" ";
	}
	cout << endl;
}