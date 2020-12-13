#pragma once
#include "Pet.h"
class Hamster : public Pet
{

public:
	Hamster() : Pet(5, 7) { name = "hamster"; }

};

