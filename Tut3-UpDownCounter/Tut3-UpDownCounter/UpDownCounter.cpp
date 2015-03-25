#include"UpDownCounter.h"
#include<iostream>
using namespace std;


UpDownCounter::UpDownCounter()
{

	counter = 0;
	endValue = 255;


}
UpDownCounter::~UpDownCounter()
{

}

void UpDownCounter::operator++()
{

	++counter;           // increment the value of counter

}
void UpDownCounter::operator--()
{

	--endValue;                 // decrement stop value of the counter 

}
void UpDownCounter::printUpCount()  // print the up counter from the start to the stop value given by the user
{

	for (int i = counter; i <= endValue; i++){


		cout << counter << endl;
		operator++();       //  increment counter value to  display
	}

}
void UpDownCounter::printDownCount()     // printing of down counting
{
	cout << endValue << endl;
	operator--();   // decrement the stop value of the counter


}
void UpDownCounter::setCounterStartValue(int in_start)
{

	counter = in_start;         // set counter start value
}

void UpDownCounter::setCounterStopValue(int in_stop)
{
	endValue = in_stop;     // set counter stop value
}