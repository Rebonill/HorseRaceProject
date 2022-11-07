#include <iostream>
#include <string>
#include "horse.h"
#include "race.h"

Race::Race(){
    h[5];
    length;
       
} // end constructor

Race::Race(int len){
    length = len;
}

void Race::printLane(int horseNum){
    int i =0;
    for(i = 0; i < length; i++) 
      {
        if(h[horseNum].getPosition() == i)
           {
	     std::cout << horseNum;
 	   }//end if statement

	else
 	   {	
	     std::cout << '.';
	   }//end of else

      }//end for loop
    std::cout << "\n";	
} // end printLane

void Race::start(){
    int i = 0;
    int keepGoing = 0;
    while(keepGoing != 1)
      {
        for(i=0; i<5; i++)
          {
 	    h[i].advance();
            printLane(i);
          }//end for loop
        std::cout<<"\n";//new line

	for(i=0; i<5; i++)
	  {
	    if(h[i].getPosition() == 15)
              { 
	        std::cout<<"Horse "<<i<<" Wins!";
		keepGoing = 1;
	      }//end if statement
	  }

       }//end while loop
     std::cout<<"\n";
}//end start function
