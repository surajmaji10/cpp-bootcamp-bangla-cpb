
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
	int a, b, c;
	char d;

	scanf("%d %c %d = %d", &a, &d, &b, &c);

	if(d == '+'){
		if(a + b == c){
			cout << "Yes" << endl;
		}else{
			cout << a + b << endl;
		}
	}else if(d == '-'){
		if(a - b == c){
			cout << "Yes" << endl;
		}else{
			cout << a - b << endl;
		}

	}else if(d == '*'){
		if(a * b == c){
			cout << "Yes" << endl;
		}else{
			cout << a * b << endl;
		}

	}


	/**********************************************************/
	return 0;
}