#include <string>
#include <iostream>
#include "horse.h"
#include <cstdlib>

Horse::Horse(){
    position = 0;
} // end constructor

void Horse::advance(){
    position += rand()%2;
} //end advance

int Horse::getPosition(){
    return position;
} // end getPosition
