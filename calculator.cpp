
#include <iostream>
#include <string>
using namespace std;

 
 
 
int
main ()
{
 
 
 
cout << "Enter simple expression: ";
int Left;
int Right;
char Operator;
cin >> Left >> Operator >> Right;
cout << Left << " " << Operator << " " << Right
<< " = ";
switch (Operator) {
case '+' : cout << Left + Right << endl; break;
case '-' : cout << Left - Right << endl; break;
case '*' : cout << Left * Right << endl; break;
case '/' : cout << Left / Right << endl; break;
default: cout << "Illegal operation" << endl;
 
 
return 0;

 
}
}


