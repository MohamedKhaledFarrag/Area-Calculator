
#include<iostream>
using namespace std;
void drawSquare(int size=4 , char pixel='*') // definition
{
for (int x=0; x<size; x++)
{
for(int y=0; y<size; y++)
cout << pixel ; // output character,
cout << endl; // then space
}
}
int main (){
  drawSquare(5,'#');
  drawSquare(3);
  drawSquare();
   
return 0;
    
    
}