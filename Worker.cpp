#include "Worker.h"

Worker::Worker(int seq, string name) :Unit(seq, name)
{
	throw "Worker::Worker�� �������� �ʾ���";
}
Worker::~Worker()
{
	throw "Worker::~Worker�� �������� �ʾ���";
}

void Worker::Sleep()
{
	throw "Worker::Sleep�� �������� �ʾ���";
}

void Worker::SetAlarm()
{
	throw "Worker::SetAlarm�� �������� �ʾ���";
}

void Worker::Relax()
{
	throw "Worker::Relax�� �������� �ʾ���";
}