#pragma once
class UpDownCounter
{
public:
	UpDownCounter(int counter=0);
	~UpDownCounter();
UpDownCounter &operator++(int);
UpDownCounter& operator--(int);
void setValue(int);

private:
	int num;
};

