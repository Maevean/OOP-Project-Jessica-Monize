#include "GreenCheekConure.h"
//GCC Hit Points
GreenCheekConure::GreenCheekConure(string name) :Birds(name) 
{
	this->hp = 7;
};

string GreenCheekConure::getbaseFeatherColor()
{
	return this->fc;
}
void GreenCheekConure::setbaseFeatherColor(string in_fc)
{
	this->fc = in_fc;
}
