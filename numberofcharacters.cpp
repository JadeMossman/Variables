#include <iostream>
using namespace std;
int main ()
{
    string mystr;
    cout << "Enter a sentence: \n";
    getline (cin, mystr);
    cout << " your sentence is: " << mystr.size() << " characters long. \n";
}
