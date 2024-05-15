
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
	lli a, b;
	cin >> a >> b;

	printf("%lld + %lld = %lld\n", a, b, a + b);
	printf("%lld * %lld = %lld\n", a, b, a * b);
	printf("%lld - %lld = %lld\n", a, b, a - b);


	/**********************************************************/
	return 0;
}