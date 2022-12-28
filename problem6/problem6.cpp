#include <iostream>
#include <math.h>
#include <conio.h>

/*
The sum of the squares of the first ten natural numbers is,

The square of the sum of the first ten natural numbers is,

Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is.

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/

int SquareOfSums(int predel){


    int sum = 0;
    for(int i = 1; i <= predel; i++){
        sum += i;
    }
    return pow(sum, 2);
}


int sumOfSquares(int predel){
    int sum = 0;
    for (int i = 1; i <= predel; i++){
        sum += pow(i, 2);
    }
    return sum;
}


int main(){
    using namespace std;
    int sumOfSquaresNum = sumOfSquares(100);
    int squareOfSumsNum = SquareOfSums(100);
    cout << squareOfSumsNum - sumOfSquaresNum << "\n";
    getch();
    return squareOfSumsNum - sumOfSquaresNum;
}