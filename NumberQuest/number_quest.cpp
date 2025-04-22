#include <iostream>
#include <time.h>

using namespace std;

int main(){
  srand(time(NULL));
  int answer= 0, attempts = 0;
  int r_number = rand() % 101;
  
  do{
    cout<<"There is a random number between 0 and 100"<<endl;
    cout<<"Try to guess:\n>";
    cin>>answer;
    if(answer != r_number){
      answer > r_number ? cout<<"\nThe random number is less than your answer\n": cout<<"\nThe random number is greater than your answer\n" ;
    }else{
      cout<<"\nYou found the answer\n";
    };

    attempts++;
  } while (answer != r_number && attempts < 8);
  
  return 1;
};