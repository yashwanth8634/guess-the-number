#include<bits/stdc++.h> //this includes all the libraries in c++ no need to include each library
using namespace std;

int main(){
  //the motive of this code is to create a radom number 
  //we need to develop a game where system generates a random num and user needs to find it

  //here we use three functions rand() srand() time()
  //first rand() is a function which generates random numbers based on a seed value which assigned by the computer default


  //here when we run the program for two times but it does not change it value
  // this is beacuse the seed value is not changing 
  //to change the seed value we use srand(seed)

  //lets assign a seed value to srand
  // now for the seed value 99 we got a num random num 361
  //here we need to constantly change seed value such that rand can generate random numbers
  // for that we use time(0)
  //this gives the current time in micro seconds lets try it

  
 
  // as the time changes every time the output is changing
  // so we will put 'y' as the seed value
  
  // now let us print rand 
  
  // any num divide by 100 we get remainders 0 to 99
  // by adding 1 to it every time we get numbers between 1 to 100
  //so see it has printed random numbers
  // now using do while loop we will develop the game

  int y = time(0);
  srand(y);
  int number = (rand() % 100) + 1;
  int guess;
  // here we created to varaibles number and guess
  //variable number gives us random numbers
  //guess is the input taken by the user
  do{
    cout<<"guess the value between 1-100"<<endl;
    cin>>guess;
    if(number>guess)
    cout<<"entered guess is lesser"<<endl;
    else if(number<guess)
    cout<<"entered guess is greater"<<endl;
    else
    cout<<"You Won!!"<<endl;

  }while(number != guess); // do the above part while the condition is true






  //now let us run our game
  

  return 0;
}