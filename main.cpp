#include <iostream>

using namespace std;

int main()
{
    char character = 'T';
    int integer = 100;
    float float_num = 10.10;
    double double_num = 50.23;

    cout << character << endl << integer<< endl << float_num<< endl << double_num<< endl;

    int arr[5] = {5,
                  10,
                  15,
                  20,
                  30};
                  
    
    int sum = 0;
    int numOfElements = 0;
    
    for (int k : arr) {
        sum = sum + k;
        numOfElements += 1;
    }
    cout <<"Sum of array: " << sum << endl;
    cout <<"Average: "<< sum/numOfElements << endl;
    

    return 0;
}