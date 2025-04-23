#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n = 1001,aux = 0;
    vector<bool> vector(n, true);

    
    vector[0] = vector[1] = false;

    for (int i = 2; i < n; ++i)
        if(vector[i])
            for (int j = i+i; j < n; j += i)
                vector[j] = false;

    for (int i = 0; i < n; ++i) 
        if (vector[i]) cout << i << " ";
    cout << std::endl;
    cin>>aux;
    return 0;
}