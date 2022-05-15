#pragma once
#include "Birds.h"
class SunConure :
    public Birds
{
public:
    SunConure(std::string name);
	//get feather color
	std::string getbaseFeatherColor();
	//set feather color
	void setbaseFeatherColor(std::string in_fc);

	void scAngrySpeech()
	{
		//cout << "Comet lets out an angry screech\n";
	}
};

