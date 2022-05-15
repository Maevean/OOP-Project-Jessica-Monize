#pragma once
#include "Birds.h"
#include <string>
using namespace std;
class GreenCheekConure :
    public Birds
{
public:
    GreenCheekConure(string name);
   string getbaseFeatherColor();
    void setbaseFeatherColor(string in_fc);

    void gccAngrySpeech()
    {
        //cout << "Apple lets out an angry screech\n" ;
    }
};

