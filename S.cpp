
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
	double d;
	cin >> d;

	// [0,25], (25,50], (50,75], (75,100]

	if(d >= 0 and d <= 25){
		cout << "Interval [0,25]";
	}else if( d > 25 and d <= 50){
		cout << "Interval (25,50]";
	} else if(d > 50 and d <= 75){
		cout << "Interval (50,75]";
	}else if(d > 75 and d <= 100){
		cout << "Interval (75,100]";
	}else {
		cout << "Out of Intervals";
	}


	/**********************************************************/
	return 0;
}