#include "../std_lib_facilities.h"

int main()
{
  cout << "Enter the name of the person you want to write to: \n";
  string first_name;
  cin >> first_name;
  cout << "Dear " << first_name << ",\n";
  cout << "\tHow's life treating you? Mine's good-ish.\n Miss you!\n";

  cout << "Enter friend's name: \n";

  string friend_name;
  cin >> friend_name;
  cout << "Have you seen " << friend_name << " lately? \n";

  cout << "Enter your friend's sex: (m/f)\n";
  char friend_sex = 0;
  cin >> friend_sex;

  if(friend_sex == 'm')
  {
    cout << "If you see " << friend_name << " ask him to call me.\n";
  }

  if(friend_sex == 'f')
  {
    cout << "If you see " << friend_name << " ask her to call me.\n";
  }

  cout << "Enter receiver's age: \n";
  int age = 0;
  cin >> age;
  if(age <= 0 || age >= 110)
    error("you're kidding!");
  
  cout << "I heard you just had a birthday and you are " << age << " years old!\n";

  if(age < 12)
    {
      cout << "Next year you will be " << age + 1 << ".\n";
    }

  if(age == 17)
    {
      cout << "Next year you will be able to vote. \n";
    }

  if(age > 70)
    {
      cout << "I hope you are enjoying retirement! \n";
    }

  cout << "Yours sincerely. \n \nNacho\n";
  return 0;
}
