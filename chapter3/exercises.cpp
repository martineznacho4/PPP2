#include "../std_lib_facilities.h"

int main() {
  cout << "Which exercise would you like to run? (2-11)\n";
  int exercise = 0;
  cin >> exercise;

  switch (exercise) {
  case 2: {

    cout << "-Miles to Kilometers-\n";
    cout << "Enter the miles to be converted: \n";

    double miles = 0.0;
    cin >> miles;

    cout << miles << " is " << miles * 1.609 << " in kilometers\n";

    break;
  }
  case 3: {
    cout << "-Does nothing!-\n";
    // int double = 0;
    break;
  }

  case 4: {
    cout << "- Arithmetic between two numbers -\n";
    cout << "Enter the first integer: ";
    int val1;
    cin >> val1;
    cout << "\nEnter the second integer: ";
    int val2;
    cin >> val2;
    cout << endl;

    cout << "The smallest number is ";

    if (val1 < val2) {
      cout << val1 << " and the largest is " << val2 << '\n';
    } else {
      cout << val2 << " and the largest is " << val1 << '\n';
    }

    cout << "Sum: " << val1 + val2 << '\n';
    cout << "Difference: " << val1 - val2 << '\n';
    cout << "Product: " << val1 * val2 << '\n';
    cout << "Ratio:  " << val1 / val2 << '\n';
    break;
  }
  case 5:
      {
    cout << "- Arithmetic between two numbers -\n";
    cout << "Enter the first integer: ";
    double val1;
    cin >> val1;
    cout << "\nEnter the second integer: ";
    double val2;
    cin >> val2;
    cout << endl;

    cout << "The smallest number is ";

    if (val1 < val2) {
      cout << val1 << " and the largest is " << val2 << '\n';
    } else {
      cout << val2 << " and the largest is " << val1 << '\n';
    }

    cout << "Sum: " << val1 + val2 << '\n';
    cout << "Diffrereerence: " << val1 - val2 << '\n';
    cout << "Product: " << val1 * val2 << '\n';
    cout << "Ratio:  " << val1 / val2 << '\n';
    break;
      }
  case 6:
      {
          cout << "- Three increasing integers -\n";
          cout << "Enter 3 integer values: \n";
          int val1, val2, val3;
          cin >> val1 >> val2 >> val3;

          if(val1 <= val2 && val1 <= val3)
              {
                  cout << val1 << ", ";
                  if(val2 <= val3)
                      {
                          cout << val2 << ", " << val3;
                      }
                  else
                      {
                          cout << val3 << ", " << val2;
                      }
              }
          else if(val2 <= val1 && val2 <= val3)
              {
                  cout << val2 << ", ";
                  if(val1 <= val3)
                      {
                          cout << val1 << ", " << val3;
                      }
                  else
                      {
                          cout << val3 << ", " << val1;
                      }
              } else {
                  cout << val3 << ", ";
                  if(val1 <= val2)
                      {
                          cout << val1 << ", " << val2;
                      }
                  else
                      {
                          cout << val2 << ", " << val1;
                      }
              }
          break;
      }
  case 7:
      {
          cout << "- Three increasing strings -\n";
          cout << "Enter 3 strings: \n";
          string val1, val2, val3;
          cin >> val1 >> val2 >> val3;

          if(val1 <= val2 && val1 <= val3)
              {
                  cout << val1 << ", ";
                  if(val2 <= val3)
                      {
                          cout << val2 << ", " << val3;
                      }
                  else
                      {
                          cout << val3 << ", " << val2;
                      }
              }
          else if(val2 <= val1 && val2 <= val3)
              {
                  cout << val2 << ", ";
                  if(val1 <= val3)
                      {
                          cout << val1 << ", " << val3;
                      }
                  else
                      {
                          cout << val3 << ", " << val1;
                      }
              } else {
                  cout << val3 << ", ";
                  if(val1 <= val2)
                      {
                          cout << val1 << ", " << val2;
                      }
                  else
                      {
                          cout << val2 << ", " << val1;
                      }
              }
          break;
      }
  case 8:
      {
          cout << "- Even or Odd -\n";
          cout << "Enter the value to evaluate: ";

          int val1;
          cin >> val1;

          if(val1 % 2 == 0)
              {
                  cout << "The value " << val1 << " is even\n";
              }
          else{
              cout << "The value " << val1 << " is odd\n";
          }

          break;
      }
  case 9:
      {

          cout << "- Number converter -\n";
          string spelled_number;
          cin >> spelled_number;


          if(spelled_number == "zero")
              {
                  cout << "0\n";
              }else if (spelled_number== "one"){
              cout << "1\n";
              
              }else if(spelled_number == "two"){
              cout << "2\n";
              }else if(spelled_number == "three"){
              cout << "3\n";
              }else if(spelled_number == "four"){
              cout << "4\n";
          }else{
              cout << "check your numbers mate";
          }

          break;
      }
  case 10:
      {
          cout << "- operation between two numbers (operation value value) -\n";
          string operation;
          double val1;
          double val2;

          cin >> operation >> val1 >> val2;

          if(operation == "+" || operation == "plus")
              {
                  cout << val1 + val2;
              }
          else if(operation == "-" || operation == "minus")
              {
                  cout << val1 - val2;
              }
          else if(operation == "*" || operation == "mul")
              {
                  cout << val1 * val2;
              }
          else if(operation == "/" || operation == "div")
              {
                  if(val2 != 0)
                      {
                          cout << val1 / val2;
                      }else {cout << "Cannot divide by zero";}

              }
          
          break;}
  case 11:
      {
      }

      
  default: {
  }
  }
  return 0;
}

