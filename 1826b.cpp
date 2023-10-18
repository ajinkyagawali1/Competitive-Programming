#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){

	int tt;
	cin >> tt;

	while(tt--){

		int n;
		cin >> n;

		std::vector<int> arr(n);

		for(auto &i : arr){
			cin >> i;
		}

		int sol = 0;

		for (int i = 0; i < n; ++i)
		{
			sol = __gcd(sol, abs(arr[i]-arr[n-i-1]));
		}

		if(sol > INT_MAX) cout << 0 << "\n";
		else cout << sol << endl;


	}
}
