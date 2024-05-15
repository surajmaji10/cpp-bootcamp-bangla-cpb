
/*
 * Author: akashmaji945 (@gmail.com) 
 */

#include<bits/stdc++.h>
using namespace std;

#define READ freopen("in.txt", "r", stdin)
#define WRITE freopen("out.txt", "w", stdout)
#define iseql(dx, dy) (abs(dx-dy) < 0.00000000001)

void init(){
	#ifndef ONLINE_JUDGE
		READ;
		WRITE;
	#endif
}

int main(){

	init();
	
	int i;
	long long l;
	char c;
	float f;
	double d;

	cin >> i >> l >> c >> f >> d;

	cout << i << endl << l << endl << c << endl << f << endl << d << endl;


	return 0;
}