#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;

class GuessNumber
{
protected:
    int numberToGuess;

public:
    GuessNumber()
    {
    	int z=100;
        srand(time(0));
        numberToGuess = rand() % z+1;
    }
    
    void feedback()
    {
        int x=0;
        while(x != numberToGuess)
        {
            cout<<"Enter the number: ";
            cin>>x;  
        if (x < numberToGuess)
        {
            cout<<"Too Low"<<endl;
        }
        else if (x > numberToGuess)
        {
            cout<<"Too High"<<endl;
        }
        else
        {
            cout<<"You Won"<<endl;
        }
        x++; 
      }
    }
};

int main()
{
    GuessNumber value;
    value.feedback();
    return 0;
}
