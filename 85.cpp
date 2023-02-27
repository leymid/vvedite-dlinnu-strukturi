#include <iostream>
using namespace std;
int main()
{
int len;
cout << "vvedite dlinnu strukturi (ot 1 do 700000000000): ";
cin >> len;
while(len>0 && len<8000000000) {
cout << '.';
len--;
}
return 0;
}
