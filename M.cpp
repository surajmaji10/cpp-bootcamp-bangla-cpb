
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
	char sym;
	cin >> sym;

	if(sym >= 65 and sym <= 90){
		cout << "ALPHA" << endl << "IS CAPITAL" << endl;
	}else if(sym >= 97 and sym <= 122){
		cout << "ALPHA" << endl << "IS SMALL" << endl;
	}else if(sym >= 48 and sym <= 57){
		cout << "IS DIGIT" << endl;
	}


	/**********************************************************/
	return 0;
}