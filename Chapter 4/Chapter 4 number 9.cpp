#include <iostream> 

using namespace std; 

int main () { 
    int P, N, D, Q, userValue, expectedValue; 
     
    
    expectedValue = 100; 
     
    cout << "Enter number of pennies: "; 
    cin >> P; 
     
    cout << "Enter number of Nickels: "; 
    cin >> N; 
     
    cout << "Enter number of Dimes: "; 
    cin >> D; 
     
    cout << "Enter number of Quarters: "; 
    cin >> Q; 
     
    
    userValue = 1 * P + 5 * N + 10 * D + 25 * Q; 
     
    if (userValue == expectedValue) 
        cout << "Congratulations! You entered $1!" << endl; 
    else if (userValue < expectedValue) 
        cout << "The value you entered is less than $1." << endl; 
    else 
        cout << "The value you entered is greater than $1." << endl; 
     
    return 0; 
}
