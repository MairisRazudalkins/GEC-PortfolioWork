#pragma once
#include "Pet.h"

class Dog : public Pet
{
public:
	Dog() : Pet(5, 5) { name = "dog"; }
};

