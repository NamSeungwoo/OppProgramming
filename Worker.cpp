#include "Worker.h"

Worker::Worker(int seq, string name) :Unit(seq, name)
{
	
}
Worker::~Worker()
{
	
}

void Worker::Sleep()
{
	View();
	cout << "열심히 일한 당신, 드르렁~ 드르렁~";
}

void Worker::SetAlarm()
{
	View();
	cout << "내일 아침을 위해 알람설정" << endl;
}

void Worker::Relax()
{
	View();
	cout << "몸이 피곤해..... 드르렁~ 드르렁~";
}