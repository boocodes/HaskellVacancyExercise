#include <iostream>
#include <conio.h>

/*

The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?

*/

int main(){
    using namespace std;
    int neededNum = 600851475143;
    int largestPrimeFactor;
    for(int i = 5; i <= neededNum; i++){
        if(((i * i) % 24 == 1) && (neededNum % i != 0)){
            largestPrimeFactor = i;
        }
    }
    cout << largestPrimeFactor;
    getch();
    return largestPrimeFactor;








}