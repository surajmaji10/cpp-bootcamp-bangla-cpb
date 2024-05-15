
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
	int a, b;
	char c;
	int d;
	scanf("%d %c %d", &a, &c, &b);

	if(c == '>'){
		if(a>b){
			cout << "Right" << endl;
		}else{
			cout << "Wrong" << endl;
		}
	}else if(c == '<'){
		if(a<b){
			cout << "Right" << endl;
		}else{
			cout << "Wrong" << endl;
		}

	}else if(c == '='){
		if(a==b){
			cout << "Right" << endl;
		}else{
			cout << "Wrong" << endl;
		}
	}


	/**********************************************************/
	return 0;
}