#include <iostream>
#include <cstdlib>
#include <ctime>

void advance(int horseNum, int* horses);
void printLane(int horseNum, int* horses);
bool isWinner(int horseNum, int* horses);

int main(){
  int horses[5] = {0,0,0,0,0};
  bool keepGoing = true;
  std::string getOut;

  while(keepGoing){
    std::cout << "Entered while loop" << std::endl;
    for(int horseNum = 0; horseNum <= 4; horseNum++){
      std::cout << "Entered for loop" << std::endl;
      advance(horseNum, &horses[horseNum]);
      std::cout << horseNum << " " << horses[horseNum] << std::endl;
      /*
      printLane(horseNum, horses[horseNum]);
      */
    }// end for loop
    std::cout << " Press Enter to continue" << std::endl;
    std::getline(std::cin, getOut);
    if (getOut.empty()){
      keepGoing = true;
    } else{
      keepGoing = false;
    }//end if
  }// end while loop
}// end main

void advance(int horseNum, int* horses){
  srand(time(NULL));
  int coin = rand() % 2;
  std::cout << coin << " is the Coin output" << std::endl;
  horses[horseNum] += coin;
}// end advance
