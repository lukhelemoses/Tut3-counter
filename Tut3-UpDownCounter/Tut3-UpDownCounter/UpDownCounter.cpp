#include "UpDownCounter.h"
#include<iostream>
using namespace std;

UpDownCounter::UpDownCounter(int counter)
{
	setValue(counter);
}


UpDownCounter::~UpDownCounter()
{
}
UpDownCounter& UpDownCounter :: operator++(int num)
{
	if (num!= 0)
	{
		if (num == 255)
			num = 0;
		else
			num++;
	
	}
	return *this;

}

UpDownCounter& UpDownCounter :: operator--(int num)
{
	if (num != 0)
	{
		if (num == 0)
			num = 255;
		else
		num--;
	}

	return  *this;
}

void UpDownCounter::setValue(int counter)
{
	if (counter <= 255)
		num = counter;
	
	
}


