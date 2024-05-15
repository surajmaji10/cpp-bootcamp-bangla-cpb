
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
	string f1, l1, f2, l2;
	cin >> f1 >> l1 >> f2 >> l2;

	if(l1 == l2){
		cout << "ARE Brothers";
	}else{
		cout << "NOT";
	}



	/**********************************************************/
	return 0;
}