
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
	const double PI = 3.141592653;
	double r;
	cin >> r;
	double area = PI * r * r;
	printf("%.9lf", area);
	//cout << setprecision(9) << fixed << area;


	/**********************************************************/
	return 0;
}