#include<iostream>
#include"stock10.h"

int main()
{
	
	Stock stock1("Nanosmart", 12, 20.0);
	stock1.show();

	Stock stock2 = Stock("Boffo objects", 2, 2);
	stock2.show();
	return 0;
	

}