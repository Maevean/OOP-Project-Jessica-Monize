#include "SunConure.h"

SunConure::SunConure(std::string name):Birds(name)
{
	//Sun Conure's Hit points
	this->hp = 10;
}
std::string SunConure::getbaseFeatherColor()
{
	return this->fc;
}
void SunConure::setbaseFeatherColor(std::string in_fc)
{
	this->fc = in_fc;
}