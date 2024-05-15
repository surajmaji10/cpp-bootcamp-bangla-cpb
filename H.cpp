
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
	double x, y;
	cin >> x >> y;

	printf("floor %.0lf / %.0lf = %.0lf\n", x, y, floor(x/y));
	printf("ceil %.0lf / %.0lf = %.0lf\n", x, y, ceil(x/y));
	printf("round %.0lf / %.0lf = %.0lf\n", x, y, round(x/y));


	/**********************************************************/
	return 0;
}