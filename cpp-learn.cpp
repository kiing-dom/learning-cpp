//Lesson 3 - Loops
#include <iostream>

using namespace std; //so the program can see cout and endl

int main()
{
    //loop to go while x < 10 and increments by 1 every loop
    for(int i = 0; i < 0; i++){
        //keep in mind that the loop checks
        //the conditional statement before it loops again
        //consequently, when x equals 10 the loop breaks.
        //x is updated before the condition is checked.
    cout<< i <<endl;
    }
    cin.get();
}

//while loop example
#include <iostream> 

using namespace std; //so we can see cout and endl

int main()
{
    int x = 0; //don't forget to declare variables

    while( x < 10){
        cout<< x <<endl;
        x++;
    }
    cin.get();
}

//do..while loop
//useful for things you want to loop atleast once

#include <iostream>

using namespace std;

int main()
{
    int x;

    x = 0;
    do{
        /*Print "Hello, World!" at least once
        Even though the condition is false
        */
       cout<<"Hello, world!\n";
    }
    while(x != 0);
    cin.get();
}







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
