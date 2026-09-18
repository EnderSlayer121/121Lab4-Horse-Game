#include <iostream>
#include <cstdlib>
#include <ctime>

void advance(int horseNum, int* horses);
void printLane(int horseNum, int* horses);
bool isWinner(int horseNum, int* horses);
bool won = false;

int main(){
  int horses[5] = {0, 0, 0, 0, 0};
  bool keepGoing = true;
  std::string getOut;
  srand(time(NULL));
  /*std::cout << "Which horse do you think will win: " << std::endl;*/
  while(keepGoing){
    std::cout << "Horse Race Game: " << std::endl;
    for(int horseNum = 0; horseNum <= 4; horseNum++){
      /*std::cout << "Entered for loop. horseNum = " << horseNum << " horses[horseNum] = " << horses[horseNum] << std::endl;*/
      advance(horseNum, horses);
      /*std::cout << horseNum << " " << horses[horseNum] << std::endl;*/
      printLane(horseNum, horses);
    }// end for loop
    if (won == false){
      keepGoing = true;
      std::cout << "Press Enter to continue" << std::endl;
      std::getline(std::cin, getOut);
    }// end if
    else{
      keepGoing = false;
    }// end else
  }// end while loop
}// end main

void advance(int horseNum, int* horses){
  int coin = rand() % 2;
  horses[horseNum] += coin;
  /*std::cout << coin << " is the Coin output. horses[horseNum] is " << horses[horseNum] << " horseNum is " << horseNum << std::endl;*/
}// end advance

void printLane(int horseNum, int* horses){
  for (int laneNum = 0; laneNum <= 14; laneNum++){
    if (horses[horseNum] == laneNum){
      std::cout << horseNum;
    }//end if
    else if (horses[horseNum] > 14){
      isWinner(horseNum, horses);
      return;
    }// end else if
    else{
      std::cout << ".";
    }// end else
  }// end for
  std::cout << std::endl;
}// end printLane

bool isWinner(int horseNum, int* horses){
  std::cout << "Horse " << horseNum << " Wins!" << std::endl;
  won = true;
  return 0;
}// end isWinner
