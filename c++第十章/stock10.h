#ifndef __STOCK10__H__
#define __STOCK10__H__
using namespace std;
#include<string>

class Stock
{
private:   //privateֻ��ͨ��public���ܷ��ʣ���ֹȥ�޸����ݣ���������ĳ�Ա�ķ��ʵĿ���
	string company;
	long shares;
	double share_val;
	double total_val;
	void set_tot() { total_val = shares * share_val; }//set_tot���������������ʵ����,�Զ���Ϊ��������
public:
	Stock();
	Stock(const std::string &co, long n, double pr);
	~Stock();
	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);
	void show();   //public�Ž����Ķ��ǽӿں���






};



#endif