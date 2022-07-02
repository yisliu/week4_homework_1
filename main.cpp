#include <iostream>
#include <string>
#include <sstream>
using namespace std;

/*
Topic description
Please count a given range[L, R] of all integers, the number22the number of occurrences.

such as a given range[2, 22],number22in number22appeared in11times, in number121 2appear in11times, in number202 0appear in11times, in number 2111times, in numbertwenty two2 2appear in22times, so the number22A total of66Second-rate.

input format
22positive integerLLandRR, separated by a space.

output format
number22the number of occurrences.
*/

int main() {
  //make variable
  int l;
  int r;
  int counter=0;
  //string i = l.length(); 
  //input
  cin>>l>>r;
  for(int i = l; i<r+1; i++){
    // if(l==i){
    //   // counter++;
    //   // cout<<counter;
    // }
    // else{
      ostringstream temp;
    //todo: I don't know how to make the counter count?
      temp << i;
      string x=temp.str();
      // cout<<x;
      for(int j = 0; j<x.length(); j++){
        if(x[j]=='2'){
          counter++;
          // cout<<x[j];
          // cout<<counter<<" ";
        }
        // else{
        //   continue;
        // }
      }
    // }
  }
  cout<<counter;
}