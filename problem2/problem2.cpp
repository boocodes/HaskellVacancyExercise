#include <iostream>
#include <conio.h>
#include <math.h>


/*
    By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.
*/



int main(){
    using namespace std;
    int sum = 0;
    for (int i = 1; i <= 4000000; i++){
        if(i % 2 == 0){
            sum += i;
        }
    }

    cout << sum;
    getch();
    return sum;
}