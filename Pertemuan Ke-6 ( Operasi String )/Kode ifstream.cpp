#include <iostream>
#include <fstream>
using namespace std;
int main()
{
 ifstream myfile;
 char sv_text;
 myfile.open("TEST.txt");
 cout<<"OPERASI FILE 2"<<endl;
 cout<<"--------------"<<endl;
 if(!myfile.fail())
 {
 cout<<"Isi dari File TEST.txt adalah ";
 while (!myfile.eof())
 {
 myfile.get(sv_text);
 cout<<sv_text;
 }
 myfile.close();
 }else{
 cout<<"File tidak ditemukan"<<endl;
 }
 getchar();
 return 0;
}
