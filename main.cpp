#include <iostream>

int isPrime(int number);


using namespace std;

int main() {

    for(int i = 2 ; i < 100000000 ;i++){

        int result = isPrime(i) ;

        if( 600851475143   % result == 0) {

            if (result != -1) {
            cout << result << endl;
        }

        }else{



        }


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
