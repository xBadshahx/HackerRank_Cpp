#include <iostream>
#include <string>
using namespace std;
/*
 * 
 * Aman Upadhyay
 * Amity University Kolkata
 *  
*/
int main(){
    string food = "Pizza";
    string* ptr = &food;
    cout << food << "\n";
    cout << &food << "\n";
    cout << *ptr << "\n";
    *ptr = "Hamburger";
    cout << *ptr << "\n";
    cout << food << "\n";
    return 0;
}
