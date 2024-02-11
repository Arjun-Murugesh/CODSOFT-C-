#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
    int num;
    int userguess;
    int tries=0;
    cout<<"Welcome to Number Challenge!"<<endl;
    cout<<"Try to guess the secret number between 1 and 10."<<endl;
    num=rand()%10+1;
    while(true){
        num=rand()%10+1;
        tries++;
        cout<<"Enter your guess: ";
        cin>>userguess;
        if(userguess>num){
            cout<<"Too high!"<<endl;
        }
        else if(userguess<num){
            cout<<"Too low!"<<endl;
        }
        else{
            cout<<"Congrats! You found the secret number in"<<tries<<"tries."<<endl;
            break;
        }
    }
    return 0;
}