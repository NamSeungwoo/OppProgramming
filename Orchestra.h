#pragma once
#include "Pianist.h"
#include "Drummer.h"


class Orchestra
{
	Musician **members;
	const int max_members;
	int now_members;
public:
	Orchestra(int _max_members);
	~Orchestra(void);
	bool JoinMember(Musician *musician);
	void Greeting() const;
private:
	void InitializeOrchestra();
};