#pragma once
#include <stdio.h>

extern const char *Endl;
class LikeAsOstream
{
	
public:
	LikeAsOstream &operator<<(int val);
	LikeAsOstream &operator<<(char val);
	LikeAsOstream &operator<<(const char *val);
	LikeAsOstream &operator<<(float val);
};