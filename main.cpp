/*********************************
**********************************
**                              **
** Wababa: Simple Question Game **
**                              **
**********************************
*********************************/

// Preprocessor Commands
#include <iostream>
#include <string>

//Global Scope Namespace 
using namespace std;


// Wababa Answer Variables
int a = 5;
int apples;
string b = "woof";
string c = "sally";
string bark;
string dollname;
int finalscore = 0;

// Wababa Answer Functions

int answerA (int answer, int thevar) {

    if ( answer == thevar ) {
        cout << "Yes!\n";
        finalscore += 1;
    }

    else {
        cout << "Wrong!\n";
    }

}



void answerQ (string answer, string thevar) {

    if ( answer == thevar ) {
        cout << "Yes!\n";
        finalscore += 1;
    }

    else {
        cout << "Wrong!\n";
    }
}

// Final Score Function
void finalScore () {
    cout << "Your final score is: " 
         << finalscore << " out of 3 correct!" 
         << endl;
         if ( finalscore == 0 )
             cout << "Try again!";
         else if ( finalscore <= 2 )
             cout << "Good job!\n";
         else
             cout << "Great job!\n";
       
           
}

int main () {



    // Wababa Welcome.
    string wababa;
    wababa = "Wababa!\n\n";
    cout << wababa;

    // Question #1
    cout << "How many red items are there: ";
    cin >> apples;
    answerA(apples, a);

    // Question #2
    cout << "What did the pet say: ";
    cin >> bark;
    answerQ(bark,b);

    // Question #3
    cout << "What's the pretty thing's name: ";
    cin >> dollname;
    answerQ(dollname,c);

    // End Score 
    finalScore();

    // Returns 0
    return 0;

}
