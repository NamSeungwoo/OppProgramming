#include "LikeAsOStream.h"
const char* Endl = "\n";
LikeAsOstream &LikeAsOstream::operator<<(int val)
{
	printf("%d", val);
	return (*this);
}
LikeAsOstream &LikeAsOstream::operator<<(char val)
{
	printf("%c", val);
	return (*this);
}
LikeAsOstream &LikeAsOstream::operator<<(const char *val)
{
	printf("%s", val);
	return (*this);
}
LikeAsOstream &LikeAsOstream::operator<<(float val)
{
	printf("%f", val);
	return (*this);
}