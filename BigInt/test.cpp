// BigInt_test.cpp : 定义控制台应用程序的入口点。
#define DEBUG
#include "iostream"
#include "algorithm"
#include "cstdio"
#include "vector"
#include "BigInt.h"
using namespace std;
int main()
{
	#ifdef DEBUG
	freopen("../input.text", "r", stdin);
	freopen("../output.text", "w",stdout);
	#endif
	BigInt t1, t2;
	char ch;
	while(cin>>t1>>ch>>t2) {
		if(t1==0 && t2==0)
			break;
		BigInt res;
		switch(ch){
			case '+':
				res = t1+t2;
				break;
			case '-':
				res = t1-t2;
				break;
			case '*':
				res = t1*t2;
				break;
			case '/':
				res = t1/t2;
				break;
			case '%':
				res = t1%t2;
				break;
			default:
				cout<<""<<endl;
				res = 0;
				break;
		}
		cout<<t1<<ch<<t2<<'='<<res<<endl;
	}
	
	return 0;
}
