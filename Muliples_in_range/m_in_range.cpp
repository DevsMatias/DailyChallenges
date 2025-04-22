#include <iostream>

using namespace std;

bool n_in_range(int n , int min, int max);


int main(){
  int min = 0, max = 0, n = 0;
  cout << "What's your Min?\n";
  cin >> min;
  cout << "\nWhat's your Max\n";
  cin >> max;
  cout << "\nWhat's your number?\n";
  cin >> n;
  n_in_range(n, min, max) ? cout << "there is a multiple of "<<n<< " within the range\n" : cout << "there is no multiple of "<<n<< " within the range\n"; 
  cin>>n;
  return 0;
};
bool n_in_range(int n, int min, int max){
  int const aux = n;
  for(int i = min; i < max; i++){
    n = aux;
    for(int j = 1; j < max; j++){
      n *= j;
      if (i == n) return true;
    }
  };
  return false;
};