
/*
 * Author: akashmaji945 (@gmail.com) 
 */

#include<bits/stdc++.h>
using namespace std;

#define READ freopen("in.txt", "r", stdin)
#define WRITE freopen("out.txt", "w", stdout)
#define iseql(dx, dy) (abs(dx-dy) < 0.00000000001)
typedef long long lli;

void init(){
	#ifndef ONLINE_JUDGE
		READ;
		WRITE;
	#endif
}

int main(){
	init();
	
	/**********************************************************/
	int a, b;
	cin >> a >> b;

	if( a % b == 0 or b % a == 0){
		cout << "Multiples" << endl;
	}else{
		cout << "No Multiples" << endl;
	}


	/**********************************************************/
	return 0;
}