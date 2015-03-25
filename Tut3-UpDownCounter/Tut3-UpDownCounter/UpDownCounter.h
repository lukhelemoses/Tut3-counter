#pragma once
class UpDownCounter
{
public:
	UpDownCounter();
	~UpDownCounter();
	void operator++();
	void operator--();
	void printUpCount();
	void printDownCount();
	void setCounterStartValue(int);
	void setCounterStopValue(int);

private:
	int counter;
	int endValue;
};

