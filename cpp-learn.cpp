//Lesson 2 - Using If - Else Statements

#include <iostream>

using namespace std;

int main()                                //main    
{
    int height_cm;                        //variable for height

    cout<<"Please input your height in cm: ";   //asks for height
    cin>> height_cm;                        //height is input
    cin.ignore();                          //Remove the enter
    if (height_cm < 175) {                     //If height is less than 175c,
        cout<<"You are pretty short!\n";
    }
    else if(height_cm == 175){
        cout<<"You are average height";
    }
    else {
        cout<<"You are really tall";        //executed if no other statement is true
    }

    cin.get();
}


// Lesson 1 - Inputs
#include <iostream>

using namespace std;

int main()
{
    int thisisanumber;

//input a value and return the value entered
    cout<<"Please enter a number: ";
    cin>> thisisanumber;
    cin.ignore();
    cout<<"You entered: " <<thisisanumber <<"\n";
    cin.get();

    return 1;
}
