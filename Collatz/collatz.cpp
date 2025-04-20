#include <iostream>
#include <vector>

using namespace std;

void collatz(int index, vector<int> &memo);
bool vectorHas(vector<int> vector, int intWanted);
int index;

int main(){
  vector<int> memo = {1};
  int number;
  int aux = 0;
  do{
    cout << "select an int to collatz: ";
    cin>>number;
    collatz(number, memo);
    
    cout << "\n[0]Exit [1]collatz\n>";
    cin>>aux;

    cout <<endl;
  }while (aux != 0 || aux > 1);
}

bool vectorHas(vector<int> vector, int intWanted){
  for(int i = 0; i < vector.size(); i++){
    if(vector.at(i) == intWanted){
      index = i;
      return true;
    } 
  };
  return false;
};

void collatz(int num, vector<int> &memo){
    if(!vectorHas(memo, num)){
      cout << num << " - > ";
      if(num % 2 == 0){ //par
        memo.push_back(num);
        num = num/2;
      } else if (num % 2 != 0 && num != 1){ //impar
        memo.push_back(num);
        num = (num * 3) + 1;
      } else {
        exit;
      }
      collatz(num, memo);
    } else {
      cout << "\nmemo used\n";
      for (int i = 0; i < memo.size(); i++){
        if(i > index){ //actually need to ferify "i < index at memo of num" 
          cout <<memo.at(i)<< " - > ";
        }
      }
    }
};
