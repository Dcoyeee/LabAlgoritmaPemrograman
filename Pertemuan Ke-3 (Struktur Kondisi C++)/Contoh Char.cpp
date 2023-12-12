#include <iostream>
 
using namespace std;
 
int main()
{
  double karakter1, karakter2, karakter3;
 
  cout << "Input 3 karakter sembarang" << endl;
  cout << "==========================" << endl;
  cout << endl;
 
  cout << "Karakter pertama: ";
  cin  >> karakter1;
 
  cout << "Karakter kedua: ";
  cin  >> karakter2;
 
  cout << "Karakter ketiga: ";
  cin  >> karakter3;
 
  cout << endl;
 
  cout << "Karakter yang diinput adalah: ";
  cout << karakter1 << ", " << karakter2 << ", dan "<< karakter3;
  cout << endl;
 
  return 0;
}
