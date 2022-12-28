#include <iostream>
#include <conio.h>



/*


2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?


*/


int main(){
    using namespace std;
    bool externalCicleFlag = true;  
    int smallestNum = 0;
    for(int i = 1; externalCicleFlag != false; i++){
        for(int j = 1; j <= 20; j++){
            if( i % j == 0){
                if(j == 20){    
                    smallestNum = i;
                    externalCicleFlag = false;
                    goto stop;    
                }
                continue;
            }
            break;
        }
    }
    stop:
    cout << smallestNum << "\n";
    
    // cout << 1%13;
    // getch();
    getch();


}