#include <iostream>
#include <conio.h>
#include <math.h>

/*



By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?


*/



int main(){
    using namespace std;
    int resultNum = 0;
    bool cicleFlag = true;
    int cicleCounter = 1;
    for(int i = 1; cicleFlag != false; i++){
        cout << i << "\n";
        if ((i * i) % 24 == 1){
            cicleCounter ++;
        }
        if(cicleCounter == 10001){
            cicleFlag = false;
            resultNum = i;
            break;
            
        }
    }
    cout << "num: " << resultNum << "\n";
    cout << "counter: " << cicleCounter;
    getch();
    return cicleCounter;
}