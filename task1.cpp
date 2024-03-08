#include<iostream>
#include<cstdlib>
#include<ctime>   
using namespace std;

int main() {
    int range;
    cout<<"Enter range: "<<endl;
    cin>>range;

    srand(time(0)); 

    int num=rand() % range + 1; 
    int guess;
    cout<<"\nWe generated a number, now guess it: " << endl;

    char tryAgain;
int attemp=1;

    label_a:
        cout<<"Enter your guess: ";
        cin>>guess;

        if(guess==num) {
            cout<<"CONGRATULATIONS! YOUR GUESS IS CORRECT " << endl;
            goto label_b;
        }
        else if (guess<num) {
            cout<<"Your guess is low"<<endl;
            cout<<"Do you want to try again? (Y/N): ";
            cin>>tryAgain;
            if (tryAgain=='Y' || tryAgain=='y') {
                cout<<"Please guess again:";
                  cout<<endl;
                   attemp++;
             goto label_a;
            }
            else {
                  cout<<"Sorry you couldn't guess"<<endl;
                goto label_b;
            }
        }
        else if (guess>num) {
            cout<<"Your guess is high"<<endl;
            cout<<"Do you want to try again? (Y/N): ";
            cin>>tryAgain;
            if (tryAgain=='Y'||tryAgain=='y') {
                cout<<"Please guess again: ";
                attemp++;
                cout<<endl;
               goto label_a;
            }
            else {
                cout<<"Sorry you couldn't guess"<<endl;
                goto label_b;
            }
        }
        
       

label_b:
 cout<<"no of attempts:- "<<attemp<<endl;
    cout<<"PROGRAM EXIT"<<endl<<"_____THANK YOU_______"<<endl;
    

    return 0;
} 
