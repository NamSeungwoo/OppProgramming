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
	cout << "������ ���� ���, �帣��~ �帣��~";
}

void Worker::SetAlarm()
{
	View();
	cout << "���� ��ħ�� ���� �˶�����" << endl;
}

void Worker::Relax()
{
	View();
	cout << "���� �ǰ���..... �帣��~ �帣��~";
}