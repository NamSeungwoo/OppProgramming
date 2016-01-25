#pragma once
#include "Place.h"
#include "Artist.h"

class Hall : public Place
{
public:
	void SetFocus();
	void View(ostream &os) const;
	Hall(ComeBackUnitEvent *cbu_eventhandler);
	MyGlobal::KeyData SelectMenu();
	void ViewConcert();
	void GoOnStage();
};