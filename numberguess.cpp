#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); 
    int guess, attempts = 0;
    int maxnumber,maxattempts;
    int level;
    cout << " Welcome to the Number Guessing Game!" << endl;
    cout<<"Choose difficulty level :";
    cout<<"1-EASY"<<endl;cout<<"2-MEDIUM"<<endl;cout<<"3-HARD"<<endl;
    cin>>level;
    if(level==1){
        maxattempts=10;
        maxnumber=50;
    }
    else if(level==2){
        maxattempts=10;
        maxnumber=100;
    }
    else{
        maxattempts=8;
        maxnumber=200;
    }
    int secretNumber = rand() % maxnumber + 1;
    cout << "Enter a number between 1 and "<<maxnumber<<endl;
    do {
        cout << "Enter your guess "<<endl;
        cin >> guess;
        attempts++;
        if (guess > secretNumber) {
            cout << "Too high! Try again.\n";
        } else if (guess < secretNumber) {
            cout << "Too low! Try again.\n";
        } else {
            cout << " Correct! You guessed it in "
                 << attempts << " attempts.\n";
        }
          if(attempts>=maxattempts){
            cout<<"GAME OVER!"<<endl;
            cout<<"Correct answer="<<secretNumber<<endl;
            break;
        }
    } while (guess != secretNumber);

    return 0;
}