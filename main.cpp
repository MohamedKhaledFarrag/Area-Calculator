
#include <iostream>
using namespace std;
int main() {
// Extract length and width
cout << "Rectangle dimensions: ";
float Length;
float Width;
float Area;

cin >> Length >> Width;
// Compute and insert the area
 Area = Length * Width;
cout << "Area = " << Area << " = Length "
<< Length << " * Width " << Width << endl;
return 0;
}
