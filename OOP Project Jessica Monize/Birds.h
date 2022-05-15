#pragma once
#include <string>
#include "GameStructure.h"
class Birds
{
public:
	Birds(std::string name);
	void healthLoss(int hit);
	int attack();
	void speach();

private:
	std::string name;
	//int fc;
	int health;

protected:
	std::string fc;
	int hp;
};