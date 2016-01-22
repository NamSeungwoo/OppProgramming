#pragma once

class Examination
{
	int difficult;
public:
	Examination(int _difficult);
	~Examination(void);
	int GetDifficult() const;
};