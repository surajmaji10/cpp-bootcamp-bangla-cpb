
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

	bool px = x > 0;
	bool py = y > 0;

	bool nx = x < 0;
	bool ny = y < 0;

	if(iseql(x, 0) && iseql(y, 0)){
		cout << "Origem" << endl;
	}else if(iseql(y, 0)){
		cout << "Eixo X" << endl;
	}else if(iseql(x, 0)){
		cout << "Eixo Y" << endl;
	} else if(px && py){
		cout << "Q1" << endl;
	}else if(nx && py){
		cout << "Q2" << endl;
	}else if(nx && ny){
		cout << "Q3" << endl;
	}else if(px && ny){
		cout << "Q4" << endl;
	}


	/**********************************************************/
	return 0;
}