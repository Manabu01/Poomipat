#include<iostream>
using namespace std;

int main(){
    int i = 0;
    int number[100];
    while(true){
        cout << "Enter an integer: ";
        cin >> number[i];
        if(number[i] != 0){
            i++;
        }else{
            break;
        }
    }

    int E = 0;
    int O = 0;
    for(int j = 0; j < i; j++){
        if(number[j]%2 == 0){
            E++;
        }else{
            O++;
        }
    }
        cout << "#Even numbers = " << E << "\n";
        cout << "#Odd numbers = " << O;

    return 0;
}
