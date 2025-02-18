#include<bits/stdc++.h>
using namespace std;


int main(){

   stack<string> cars;

   cars.push("Rickshaw");
   cars.push("Bus");

   cout << cars.top() << endl;

   cars.top() = "Richshaw update";

   cout << cars.top() << endl;

   cout << cars.size() << endl;

   cars.pop();

   cout << cars.size() << endl;
     
    return 0;
}