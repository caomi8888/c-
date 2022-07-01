#ifndef __STOCK10__H__
#define __STOCK10__H__
using namespace std;
#include<string>

class Stock
{
private:   //private只有通过public才能访问，防止去修改数据，描述对类的成员的访问的控制
	string company;
	long shares;
	double share_val;
	double total_val;
	void set_tot() { total_val = shares * share_val; }//set_tot定义在类的声明中实现了,自动成为内联函数
public:
	Stock();
	Stock(const std::string &co, long n, double pr);
	~Stock();
	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);
	void show();   //public放进来的都是接口函数






};



#endif