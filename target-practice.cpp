#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){

	int tt;
	cin >> tt;

	int val[10][10] = {{1,1,1,1,1,1,1,1,1,1},
					   {1,2,2,2,2,2,2,2,2,1},
					   {1,2,3,3,3,3,3,3,2,1},
					   {1,2,3,4,4,4,4,3,2,1},
					   {1,2,3,4,5,5,4,3,2,1},
					   {1,2,3,4,5,5,4,3,2,1},
					   {1,2,3,4,4,4,4,3,2,1},
					   {1,2,3,3,3,3,3,3,2,1},
					   {1,2,2,2,2,2,2,2,2,1},
					   {1,1,1,1,1,1,1,1,1,1}};

	while(tt--){
	int points = 0;
	char targ[10][10];

		for(int i=0; i<10; i++){
			for(int j=0; j<10; j++){
				cin >> targ[i][j];
				if(targ[i][j] == 'X'){
					points += val[i][j];
				}
			}

		}

		cout << points << endl;



	}


}
