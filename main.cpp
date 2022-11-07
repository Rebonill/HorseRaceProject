#include <iostream>
#include <cstdlib>
#include "horse.h"
#include "race.h"


int main(){

int randseed;
std::cout << "Please enter a random integer for the seed:";//tells user what is need
std::cin >> randseed;// gets random seed from user
srand(randseed);

Race r(15);//track length
r.start();

return 0;
}
