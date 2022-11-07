#include <iostream>
#include <cstdlib>

class Horse{
  private:
    int position;
  public:
    Horse()
      {
        position = 0;
      };// end null parameter constructor
    
    void advance()
      {
        position += rand()%2;
      };// end advance function

    int getposition()
      {
        return position;
      };// end getposition functio
};

class Race
{
  private:
    Horse h[5];
    int length;

  public:
    Race()
      {
        Horse h[5];
        length=15;
      }

     void printLane(int horseNum)
       {
         int i =0;
         for(i = 0; i < length; i++) 
           {
	     if (h[horseNum].getposition() == i)
	        {
		    std::cout << horseNum;
		}//end if statement

	     else
		{	
		    std::cout << '.';
		}//end of else

	   }//end for loop
      std::cout << "\n";       

       }// end printLane


     void start()
       {
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
	         if(h[i].getposition() == 15)
		   { 
		     std::cout<<"Horse "<<i<<" Wins!";
		     keepGoing = 1;
		   }//end if statement
	       }

	   }//end while loop

      }//end start function


};//end race class






int main(){

int randseed;
std::cout << "Please enter a random integer for the seed:";//tells user what is need
std::cin >> randseed;// gets random seed from user
srand(randseed);
Race h;
h.start();








return 0;
}
