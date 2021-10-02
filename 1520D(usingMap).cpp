// author : Anuj Maurya


#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ul unsigned long long


void anuj(){
	int n;
	cin >> n;
	map<int, int> m;
	for(int i = 1; i <= n; i++) {
		ll x;
		cin >> x;
		m[x-i]++;
	}
	ll ans = 0;
	for(auto i = m.begin(); i != m.end(); i++) {
		ans += (m[i] * (m[i]-1)) /2;
	}
	cout << ans << '\n';

}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		anuj();
	}
	return 0;
}
