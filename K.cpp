
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

	int max = x, min = y;

	if(max < min){
		swap(max, min);
	}

	if(z > max){
		max = z;
	}else if(z < min){
		min = z;
	}

	cout << min << " " << max << endl;

	/**********************************************************/
	return 0;
}