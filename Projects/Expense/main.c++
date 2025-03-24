#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
  int salary;
  int savings;
  string username;
  string password;

public:
  // Public varibles
  string category[7][2] = {{"Food"}, {"Rent"}, {"Utilities"}, {"Healthcare"}, {"Entertainment"}, {"Education"}, {"Other"}};

  // Setters Decleration
  void setSalary(int sal);
  void setSaving(int sav);
  void setUsername(string user);
  void setPassword(string pass);

  // Getters Decleration
  int getSalary();
  int getSaving();
  string getUsername();
  string getPassword();
};

int main()
{
  // VARIABLES
  int monthly_budget = 0;
  int saving, saving_goal;
  bool program_run = true;
  int n = 10;

  int user_savings[n];
  int user_budget[n];

  // LOOP TO INITIALIZE ALL ARRAY MEMBERS TO ZERO
  for (int i = 0; i <= n; i++)
  {
    user_savings[i] = 0;
    user_budget[i] = 0;
  }

  Person user[n];

  int user_no = 0;

  // For loop for user authentication

  for (int i = 0; i < n; i++)
  {

    // Create Account
    cout << "\t\t\t Create your Account\n \t\t\t Enter your Username: ";
    string username;
    cin >> username;
    user[user_no].setUsername(username);

    cout << "\t\t\t Create Password: ";
    string password;
    cin >> password;
    user[user_no].setPassword(password);

    // MAIN PROGRAM RUN
    while (program_run)
    {

      // MENU
      cout << "\t\t\t ######## Finance Managment ########\n";
      cout << "\t\t\t 1). Enter your Salary\n \t\t\t 2). Set Saving Goal\n \t\t\t 3). Set categories limit\n \t\t\t 4). Savings This month\n \t\t\t 5). Analyse my spending\n \t\t\t 5). Exit\n \t\t\t ######## CHOOSE YOUR DESIRED OPERATION: ";

      int choice;
      cin >> choice;

      if (choice == 1)
      {
        cout << "\t\t\t Your current monthly budget is " << user_budget[user_no] << endl;
        cout << "\t\t\t Set your monthly budget: ";
        cin >> user_budget[user_no];
        user[user_no].setSalary(user_budget[user_no]);

        while (user_budget[user_no] <= 0)
        {
          cout << "\t\t\t Enter a valid budget\n";
          cout << "\t\t\t Set your monthly budget: ";
          cin >> user_budget[user_no];
          user[user_no].setSalary(user_budget[user_no]);
        }
        cout << "\t\t\t Your budget has been set to " << user_budget[user_no] << endl;
        cout << "\n\n\n";
      }
      else if (choice == 2)
      {

        cout << "\t\t\t Enter your savings goal for this month\n \t\t\t Current Saving Goal :" << user_savings[user_no] << "\n\t\t\t Amount : ";
        cin >> user_savings[user_no];
        user[user_no].setSaving(user_savings[user_no]);
        while (user_savings[user_no] > user_budget[user_no])
        {
          cout << "\t\t\t Savings goal should be smaller than budget \n \t\t\t Enter a valid budget\n \t\t\t Amount : ";
          cin >> user_savings[user_no];
          user[user_no].setSaving(user_savings[user_no]);
          cout << "\n\n\n";
        }
      }
      else if (choice == 3)
      {
        cout << "\t\t\t Set budget limit for different Categories\n \t\t\t 1). Food \n \t\t\t 2). Rent \n \t\t\t 3). Utilities \n \t\t\t 4). Health care \n \t\t\t 5). Entertainment  \n \t\t\t 6). Education \n \t\t\t 7). Other\n";

        int budget_remaing = user_budget[user_no];
        bool budget_limit = true;

          for (int i = 0; i < 7; i++)
          {
            cout << "\t\t\t (Budget Remaining : " << budget_remaing << "   " << "Savings Goal : " << user_savings[user_no] << endl;
            cout << "\t\t\t Enter budget for " << user[user_no].category[i][0] << ": ";
            cin >> user[user_no].category[i][1];
            budget_remaing -= stoi(user[user_no].category[i][1]);

            if (budget_remaing < 0)
            {
              cout << "\n\t\t\t Kindly increase your budget or lower your spendings\n";
              break;
            }
            
          }
      }
    }
  }

  return 0;
}

// Setters Definitions
void Person::setSalary(int sal)
{
  salary = sal;
}

void Person::setSaving(int sav)
{
  savings = sav;
}

void Person::setUsername(string user)
{
  username = user;
}

void Person::setPassword(string pass)
{
  password = pass;
}

// Getters Definitions

int Person::getSalary()
{
  return salary;
}

int Person::getSaving()
{
  return savings;
}

string Person::getUsername()
{
  return username;
}

string Person::getPassword()
{
  return password;
}