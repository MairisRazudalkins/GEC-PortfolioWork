#pragma once

class Pet
{
	int hunger = 0;
	int bored = 0;
	
protected:
	inline int GetMood() const { return hunger + bored; }
	void PassingTime(int time = 1);
	
public:
	Pet(int hunger = 0, int boredom = 0);
	std::string name = "pet";
	
	void Feed(int food = 4);
	void Play(int fun = 4);
	virtual void Talk();
	
	virtual ~Pet(){};
};
