#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
    int i;
    for(i=0; i < cars.size(); i++){
      cout<< cars[i] << endl;
    }

    // Access a element fromn  vector
    cout<< cars[0] << endl;

    // Access 1st element
    cout << cars.front() << endl;

    // Access last element
    cout << cars.back() << endl;
   
}