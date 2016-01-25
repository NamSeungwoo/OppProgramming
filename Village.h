#pragma once
#include "Place.h"
#include "Magician.h"
#include "Worker.h"

class Village : public Place
{
private:
	MyGlobal::KeyData SelectMenu();
	void TurnOff();
	void Relax();
public:
	void SetFocus();
	Village(ComeBackUnitEvent *cbu_eventhandler);
	void View(ostream &os) const;
};