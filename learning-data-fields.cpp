//messing around with data fields

#include <iostream>
 using namespace std;

 int main() {
     cout<< "Hello World" << endl;
     cout<< "I am learning C++\n";

     int myNum = 20;
     myNum = 19;
     cout<< "I am " << myNum <<" years old." << endl;

     int birthday = 1;
     int newAge = myNum + birthday;
     cout<< "I am now " << newAge <<" years old";

     const float PI = 3.14;

     return 0;
 }
