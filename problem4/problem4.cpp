#include <iostream>
#include <conio.h>


/*
    
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.


*/



int reverseNumber(int number){
    int n = number;
    int reversedNumber = 0;
    while(n)
    {
        reversedNumber = reversedNumber*10+n%10;
        n /= 10;
    }
    return reversedNumber;
}


int main(){
    using namespace std;
    int firstNumberOfPalindrom;
    int secondNumberOfPalindrom;
    int largestPalindrom = 1;
    for(int i = 100; i <= 999; i++){
        for(int j = 100; j <= 999; j++){
            if((reverseNumber(i*j) == i * j) && (reverseNumber(i*j) > largestPalindrom )){
                largestPalindrom = i*j;
                firstNumberOfPalindrom = i;
                secondNumberOfPalindrom = j;
            }
        }
        
    }
    cout << largestPalindrom;
    getch();
    return largestPalindrom;


}