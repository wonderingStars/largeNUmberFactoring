#include <iostream>

int isPrime(int number);
int numberToFactor(long long numberToFactor , int primes );

using namespace std;



int main() {

int loopIletrations = 10000;



    for(int i = 2 ; i < loopIletrations ;i++){

        int result = isPrime(i) ;

         numberToFactor( 600851475143 ,  result );

    }
    return 0;
}



int isPrime(int number) {

    for (int i = 2; i < number; i++) {

        if (number % i == 0) {
            return -1;
        }
    }

    return number;
}

int numberToFactor(long long numberToFactor , int prime ){

    if( numberToFactor   % prime == 0) {

        if (prime != -1) {
            cout << prime << endl;
        }
    }
}