
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
	int x, y, z;
	cin >> x >> y >> z;
	int s = x + y + z;

	int mn, mx;

	mn = x, mx = x;
	if(y > mx) mx = y;
	if(z > mx) mx = z;

	if(y < mn) mn = y;
	if(z < mn) mn = z;


	int t = s - (mn + mx);
	cout << mn << endl << t << endl << mx << endl;
	cout << endl;
	cout << x << endl << y << endl << z << endl;

	/**********************************************************/
	return 0;
}