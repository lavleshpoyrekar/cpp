#include <iostream>     
#include <iomanip>      
using namespace std;
int main () 
{
  double float_value =3.14159;
  cout << setprecision(4) << float_value << '\n';
  cout << setprecision(9) << float_value << '\n';
  cout << fixed;
  cout << setprecision(5) << float_value << '\n';
  cout << setprecision(10) << float_value << '\n';
   cout << "The number printed with width 10"<<endl;
  cout << setw(10);
  cout << 77 << endl;
   
  cout << "The number printed with width 2"<<endl;
  cout << setw(2);
  cout << 10 << endl;
   
  cout << "The number printed with width 5"<<endl;
  cout << setw(5);
  cout << 25 << endl;
  cout << setfill ('*') << setw (10);
  cout << 15 << endl;
  cout << setfill ('#') << setw (5);
  cout << 5 << endl;
  cout << setfill ('#') << setw (5);
  cout << 1 << endl;
  cout << setfill ('*') << setw (10);
  cout << 25 << endl;
  cout<<hex;
  cout<<setiosflags(ios::showbase|ios::uppercase)<<endl;
  cout<<100<<endl;
   cout << "Before reset: \n"
         << hex
         << setiosflags(ios::showbase)
         << 100<< endl;
 
    // Using resetiosflags()
    cout << "Resetting showbase flag"
         << " using resetiosflags: \n"
         << resetiosflags(ios::showbase)
         << 100<< endl;

        int num = 50;
         cout << "Before set: \n"
         << num<< endl;
 
    // Using setbase()
    cout << "Setting base to hex"
         << " using setbase: \n"
         << setbase(8)
         << 50<< endl;
 
  return 0;
}