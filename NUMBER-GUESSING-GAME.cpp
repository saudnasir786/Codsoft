#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main(){
    int maxRange,randNum,guess;
    srand(time(0));
    cout<<"Enter your Max Range: ";
    cin>>maxRange;
    randNum= (rand()%maxRange)+1;
    do
    {
        cout<<endl<<endl<<"Guess the Number: ";
        cin>>guess;
        if (guess>randNum)
        {
            cout<<endl<<"guess is to high";
        }
        else if (guess<randNum)
        {
            cout<<endl<<"guess is to low";
        }
        else if (guess==randNum)
        {
            cout<<endl<<"Congratulation's you guess the correct number"<<endl;
        }
    } while (guess!=randNum);
}
