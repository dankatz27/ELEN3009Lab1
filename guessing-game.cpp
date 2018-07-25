/*
 Write a program which gives the user five chances to guess a secret random number
 (between 1 and 100). If they guess the number they win the game and it ends; otherwise
 they lose after five guesses. After each guess an appropriate message is to be shown:
 “Guess higher”, “Guess lower”, “You win” or “You lose”.
 */



#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>


using namespace std;


int main(){
    
    int guess;
    int num;
    int counter;
    
    srand(time(0));
    num = rand() % 100;
    
    
    cout<< "You will have 5 guesses."<< endl;
    cout<< "If the guess is too high or too low you will be informed.."<< endl;
    cout<< "Guess a number between 1 and 100"<< endl;
    for(counter=1; counter <= 5; counter ++){
        cin>> guess;
        
        if( guess > num){
            
            cout<< "The number you guessed is too high, please try again."<< endl;
            
        }
        else if( guess < num){
            
            cout<< "The number you guessed is too low, please try again."<< endl;
            
        }
        
        else{
            cout<< "The number you guessed is correct."<< endl;
            
            break;
        }
        
        
        
    }
    
    
    
    return 0;
}

