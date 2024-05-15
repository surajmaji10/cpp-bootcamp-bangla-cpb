
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

	int x = max(a, c);
	int y = min(b, d);

	if(x <= y){
		cout << x << " " << y;  
	}else{
		cout << -1;
	}

	/**********************************************************/
	return 0;
}