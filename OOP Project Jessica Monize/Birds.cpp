#include "Birds.h"

Birds::Birds(std::string name)
{
	this->name = name;
	this->health = 100;
	this->hp = 10;
}
//Birds Loss of Health
void Birds::healthLoss(int hit)
{
	this->health -=hit;
	if (this->health < 0)
	{
		this->health = 0;
	}
}
void Birds::speach()
{
	
}
//Birtds Attack
int Birds::attack()
{
	return this->hp;
}