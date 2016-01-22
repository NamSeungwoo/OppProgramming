#pragma once
#include "Place.h"
#include "Magician.h"
#include "Worker.h"

class Village : public Place
{
public:
	void SetFocus();
	Village(ComeBackUnitEvent *cbu_eventhandler);
	void View(ostream &os) const;
};