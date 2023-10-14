#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){
	int n;
	cin >> n;
	
	int x=0;

	while(n--){
	
	string op;
	cin >> op;

	if(op.find("+") != string::npos){
	x+=1;
	}
	else
	{
	x-=1;
	}
	}

	cout << x;

}
