#include "Worker.h"

Worker::Worker(int seq, string name) :Unit(seq, name)
{
	throw "Worker::Worker을 구현하지 않았음";
}
Worker::~Worker()
{
	throw "Worker::~Worker을 구현하지 않았음";
}

void Worker::Sleep()
{
	throw "Worker::Sleep을 구현하지 않았음";
}

void Worker::SetAlarm()
{
	throw "Worker::SetAlarm을 구현하지 않았음";
}

void Worker::Relax()
{
	throw "Worker::Relax를 구현하지 않았음";
}