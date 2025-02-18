#include<bits/stdc++.h>
using namespace std;

int main(){

   queue<string> cars;

   cars.push("Rickshwa");
   cars.push("Nosimon");

   cout  << cars.front() << endl;
   cout << cars.back() << endl;

   cars.front() = "Rickshaw update";
   cars.back() =  "Nosimon update";



   cout << cars.front() << endl;
   cout << cars.back() << endl;

   cars.pop();

   cout << cars.front() << endl;




   return 0;


}