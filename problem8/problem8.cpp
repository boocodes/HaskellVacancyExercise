#include <iostream>
#include <conio.h>
#include <math.h>

/*



The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.


*/


int main(){
    using namespace std;

    unsigned long int sum = 0;
    bool cicleFlag = true;
    for(int i = 1; i <= 2000000; i++){
        // cout << "i: " << i << ", " << "sum: " << sum << "\n";
         if ((i * i) % 24 == 1){
            sum += i;
        }
    }
    cout << sum;
    getch();
    return sum;
}
