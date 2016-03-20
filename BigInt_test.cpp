// BigInt_test.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "iostream"
#include "algorithm"
#include "cstdio"
#include "vector"
#include "BigInt.h"
using namespace std;
int main()
{
	//test for construct and assignment fuction
	BigInt test1("123456789123456789"),test2(123456789);
	cout<<"test construct:  "<<test1<<" || "<<test2<<endl;
	
	//test for input or output reload
	cout<<"input a long positive:";
	cin>>test1;
	cout<<"test input stream:  "<<test1<<endl;
	cout<<"input a long negative:";
	cin>>test2;
	cout<<"test input stream:  "<<test2<<endl;

	//test for bool operator
	test1="12345600000",test2="-12345600000";
	cout<<"one positive number and one negative number:"<<endl;
	if(test1>test2) 
		cout<<test1<<'>'<<test2<<endl;
	else
		cout<<test1<<"<="<<test2<<endl;

	test1="12345600000",test2="12345000000";
	cout<<"two positive numbers compare:"<<endl;
	if(test1>test2) 
		cout<<test1<<'>'<<test2<<endl;
	else
		cout<<test1<<"<="<<test2<<endl;
	cout<<"compare with itself:"<<endl;
	if(test1>test1) 
		cout<<test1<<'>'<<test1<<endl; 
	else
		cout<<test1<<"<="<<test1<<endl;

	//test for addition
	test1="123456788",test2="-123456789";
	cout<<test1<<" + "<<test2<<" = "<<test1+test2<<endl;

	//test for subtract
	cout<<test1<<" - "<<test2<<" = "<<test1-test2<<endl;

	//test for multipliy
	test1="111111111",test2="111111111";
	cout<<test1<<" * "<<test2<<" = "<<test1*test2<<endl;
	test2="11";
	
	//test for div
	BigInt x=test1*test2;
	cout<<x<<" / "<<test1<<" = "<<x/test1<<endl;
	
	//test for mod
	cout<<x<<" % "<<test1<<" = "<<x%test1<<endl;
	x += test2;
	cout<<x<<" % "<<test1<<" = "<<x%test1<<endl;
	return 0;
}
