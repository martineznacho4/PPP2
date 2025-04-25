#include "std_lib_facilities.h"

//#include <iostream>

using namespace std;


int main()
{
  double d =0;
  while(cin>>d)
  {
    int i = d;
    char c = i;
    int i2 = c;
    cout << " d==" << d
	 << " i==" << i
	 << " i2==" << i2
	 << " char("<<c<<")\n";
  }
}




// int main()
// {
//   string previous = " ";
//   string current;

//   while(cin >> current){
//     if(previous == current){
//       cout << "repeated word: " << current << '\n';
//     }
//     previous = current;
//   }
  
//   return 0;
// }




// int main()
// { 
//   cout << "Please enter your first name and age\n"; 

//   string firstname = "???";
//   double age = -1.0;

//   cin >> firstname >> age;
//   cout << "Hello," <<  firstname << " (age" <<  age * 12 <<  ")\n";

//   return 0;
//}


// int main()
// {
//   cout << "Please enter your first and last names: \n";
//   string first;
//   string second;
//   cin >> first >> second;
//   cout << "Hello, " << first << ' ' << second << '\n';
  
//   return 0;
// }




