#include<bits/stdc++.h>
using namespace std;

void testCase(){
	int n, k; cin >> n >> k;
	int a[n];
	for(int &x : a) cin >> x;
	sort(a,a+n);
	for(int i = n - 1; i >= n - k; i--) cout << a[i] << " ";
	cout << endl;
}

int main(){
	int t; cin >> t;
	while(t--) testCase();
}