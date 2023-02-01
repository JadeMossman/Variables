#include <iostream>
using namespace std;
int main ()
{
    int length;
    string greet1 = "Hello";
    string greet2 = ", world";
    string greet3 = greet1 + greet2;
length = greet3.size();
cout << "The length of the combined strings is: "<< length << "\n";


}
