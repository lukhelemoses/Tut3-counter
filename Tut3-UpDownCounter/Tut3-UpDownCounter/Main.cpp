#include<iostream>
#include"UpDownCounter.h"
using namespace std;

int main()
{
	UpDownCounter num;
	int start, stop;
	int k, d;
	cout << "Decision Making: if you want a default counter click 1 \n Else click 2  " << endl;
	cin >> k;
	cout << "Decision Making:choose an Upcounter by clicking 3\nElse Choose a Downcounter by clicking 4" << endl;
	cin >> d;
	if (k == 2)
	{
		cout << "Enter the start and end value value of the counter\n" << endl;
		cin >> start >> stop;
		num.setCounterStartValue(start);
		num.setCounterStopValue(stop);
		cout << "UpCounter" << endl;
		if (d == 3)        // count up if d=3
		{
			++num;
			num.printUpCount();
		}
		else
			if (d == 4)      // count down if d=4
			{
				--num;
				num.printDownCount();
			}
	}
	else
		if (k == 1)           // default counter 
		{
			if (d == 4)          // down counter if d=4
			{
				--num;
				num.printDownCount();

			}
			else
				if (d == 3)  // up counter if d=3
				{
					++num;
					num.printUpCount();
				}
		}
	system("pause");
	return 0;
}