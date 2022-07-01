#include<iostream>
#include"stock10.h"

Stock::Stock()
{
	company = "no name";
	shares = 0;
	share_val = 0.0;
	total_val = 0.0;
}

Stock::~Stock()//析构函数
{
	cout << "Bye " << company << endl;
}

Stock::Stock(const string &co, long n, double pr)
{
	company = co; //类的成员函数可以访问类的成员变量的
	if (n < 0)
	{
		cout << "Number of shares can't be negative;" << company << " shares set to be 0. " << endl;
		shares = 0;
	}

	else
	{
		shares = n;
		share_val = pr;

		set_tot();
	}

}

void Stock::buy(long num, double price)
{
	if (num < 0)
	{
		cout << "Number of shares can't be negative, Transaction is aborted;" << endl;
	}
	else
	{
		shares += num;
		share_val = price;
		set_tot();
	}
}

void Stock::sell(long num, double price)
{
	if (num < 0)
	{
		cout << "Number of shares can't be negative, Transaction is aborted;" << endl;
	}
	else if (num > shares)
	{
		cout << "You can't sell more than you have,Transaction is aborted;" << endl;
	}
	else
	{
		shares -= num;
		share_val = price;
		set_tot();
	}
}

void Stock::update(double price)
{
	share_val = price;
	set_tot();
}

void Stock::show()
{
	cout << "Company: " << company << endl;
	cout << "Shares: " << shares << endl;
	cout << "Share price: " << share_val << endl;
	cout << "Total worth: " << total_val << endl;
}




