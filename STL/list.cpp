#include <bits/stdc++.h>
using namespace std;

int main(){
    list <string> cars = {"Ricksha", "Nosimon", "Bus"};

   /* for (string car : cars){
        cout << car << endl;
    }
  */
   // cout << cars.front();
   // cout << cars.back() << endl;

    cars.front() = "Rickshaw update";
    cars.back() = "Bus update";

    cout << cars.front() << endl;
    cout << cars.back() << endl;

    cars.push_back("Tesla");
    cars.push_front("Volvo");

    for( string car : cars){
      cout << car << endl;
    }

    cars.pop_front();
    cars.pop_back();
    for (string car : cars){
        cout << car << endl;
    }
    

    cout << cars.empty() << endl;

   
    return 0;
}

