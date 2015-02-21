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



void answerA (int answer, int thevar) {

if ( answer == thevar )
    cout << "Yes!\n";
else 
    cout << "Wrong!\n";
}

void answerQ (string answer, string thevar) {

if ( answer == thevar )
    cout << "Yes!\n";
else 
    cout << "Wrong!\n";
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
    cout << "What did the dog say: ";
    cin >> bark;
    answerQ(bark,b);

    // Question #3
    cout << "What's her name: ";
    cin >> dollname;
    answerQ(dollname,c);


    // Returns 0
    return 0;

}
