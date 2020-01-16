#include <iostream>
#include "functions.h"
 using namespace std;

 int main()
 {
     int first = 23;
     int second = 103;
     int array1[5] = {0, 1, 2, 3, 4};

    //before Function call
    cout << "Before swap call, first : " << first << endl;
    cout << "Before swap call, second : " << second << endl;
    
    swap(first, second);
    cout << "After swap call, first: " << first << endl;
    cout << "After swap call, second: " << second << endl;

    //Array Print
    printArr(array1, 5);




     return 0;
 }