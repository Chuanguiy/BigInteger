#ifndef BIGINTEGER
#define BIGINTEGER
#include "string"
#include "vector"

//100000000进制大整数
//把大整数分段存储，每一段的宽度是WIDTH，用容器vector<int> s倒序存储每一段的数值
//eg.：123456789123456789,在s中存成:(23456789),(34567891),(12)

class BigInt{
	static const int BASE = 100000000;
	static const int WIDTH = 8;
	std::vector<int> s;
	int negative;
	void printVector();//for test in member function
	static void testopera();//测试可能出现在运算符重载的特殊情况
public:
	
	void clearZero();//清楚最高位的零
	BigInt operator * (const __int64 &b) const;
	BigInt():negative(0) { s.push_back(0);}
	BigInt(long long num) { negative=0;*this = num;}
	BigInt(const std::string &str) { negative=0;*this = str;}
	BigInt(const BigInt &a) { *this=a;}
	BigInt& operator = (const BigInt &);
	BigInt& operator = (const std::string &);
	BigInt& operator = (long long );
	friend std::ostream& operator << (std::ostream &, const BigInt &);
	friend std::istream& operator >> (std::istream &, BigInt &);
	BigInt operator - () const;
	BigInt operator + (const BigInt &) const;
	BigInt operator - (const BigInt &) const;
	BigInt operator * (const BigInt &) const;
	BigInt operator / (const BigInt &) const;
	BigInt operator % (const BigInt &) const;
	BigInt operator += (const BigInt &);
	BigInt operator -= (const BigInt &);
	BigInt operator *= (const BigInt &);
	BigInt operator /= (const BigInt &);
	BigInt operator %= (const BigInt &);
	BigInt& operator ++();
	const BigInt operator ++(int);
	bool operator !() const;
	bool operator >(const BigInt &) const;
	bool operator <(const BigInt &) const;
	bool operator !=(const BigInt &) const;
	bool operator ==(const BigInt &) const;
	bool operator >=(const BigInt &) const;
	bool operator <=(const BigInt &) const;
	~BigInt();
};
#endif
