//race.h
#ifndef RACE_H_EXISTS
#define RACE_H_EXISTS

#include <string>
#include "horse.h"

class Race {
    private:
        Horse h[5];
	int length;

    public:
        Race();
	Race(int len);
	void printLane(int horseNum);
	void start();
};//end Class
#endif
