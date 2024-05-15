
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
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	long long rem = 1;
	rem = (rem * a) % 100;
	rem = (rem * b) % 100;
	rem = (rem * c) % 100;
	rem = (rem * d) % 100;

	(rem < 10) ? (cout << "0" << rem << endl) : (cout << rem << endl);

	/**********************************************************/
	return 0;
}