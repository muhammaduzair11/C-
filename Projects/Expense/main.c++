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
  int n = 10;

  int user_savings[n];
  int user_budget[n];

  // LOOP TO INITIALIZE ALL ARRAY MEMBERS TO ZERO
  for (int i = 0; i < n; i++)
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
    bool account_check = true;

    while (account_check)
    {
      cout << "\t\t\t Create your Account\n \t\t\t Enter your Username: ";
      string username;
      cin >> username;
      user[user_no].setUsername(username);

      cout << "\t\t\t Create Password: ";
      string password;
      cin >> password;
      user[user_no].setPassword(password);

      bool isUnique = true;
      for (int i = 0; i < n; i++)
      {
        if (i != user_no && user[user_no].getUsername() == user[i].getUsername())
        {
          isUnique = false;
          break;
        }
      }

      if (!isUnique)
      {
        cout << "\t\t\t Username already taken\n";
      }
      else
      {
        account_check = false;
      }
    }

    bool program_run = true;

    // MAIN PROGRAM RUN
    while (program_run)
    {

      // MENU
      cout << "\t\t\t ######## Finance Managment ########\n";
      cout << "\t\t\t 1). Enter your Salary\n \t\t\t 2). Set Saving Goal\n \t\t\t 3). Set categories limit\n \t\t\t 4). Savings This month\n \t\t\t 5). Exit\n \t\t\t ######## CHOOSE YOUR DESIRED OPERATION: ";

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
        while (user_savings[user_no] > user_budget[user_no])
        {
          cout << "\t\t\t Savings goal should be smaller than budget \n \t\t\t Enter a valid budget\n \t\t\t Amount : ";
          cin >> user_savings[user_no];
          cout << "\n\n\n";
        }
      }
      else if (choice == 3)
      {
        cout << "\t\t\t Set budget limit for different Categories\n \t\t\t 1). Food \n \t\t\t 2). Rent \n \t\t\t 3). Utilities \n \t\t\t 4). Health care \n \t\t\t 5). Entertainment  \n \t\t\t 6). Education \n \t\t\t 7). Other\n";

        int budget_remaing = user_budget[user_no];

        for (int i = 0; i < 7; i++)
        {
          cout << "\t\t\t (Budget Remaining : " << budget_remaing << "   " << "Savings Goal : " << user_savings[user_no] << endl;
          cout << "\t\t\t Enter budget for " << user[user_no].category[i][0] << ": ";
          cin >> user[user_no].category[i][1];
          budget_remaing -= stoi(user[user_no].category[i][1]);
          user[user_no].setSaving(budget_remaing);

          if (budget_remaing < 0)
          {
            cout << "\n\t\t\t Kindly increase your budget or lower your spendings\n";
            break;
          }
        }
      }
      else if (choice == 4)
      {
        int saving = user[user_no].getSaving();
        cout << "\t\t\t You Saved " << saving << " this month. Your saving goal was " << user_savings[user_no] << endl;
      }
      else if (choice == 5)
      {
        user_no++;
        program_run = false;
      }
    }

    // New Registration Checker
    char new_user;
    cout << "\t\t\t Register New User? Y/N\n \t\t\t Enter : ";
    cin >> new_user;
    if (new_user != 'Y' && new_user != 'y')
    {
      break;
    }
  }

  // Spending Analysis
  bool spend_analysis = true;

  while (spend_analysis)
  {

    string login_username;
    string login_password;
    cout << "\n\t\t\t ********Spending Analysis********\n \t\t\t Enter Username: ";
    cin >> login_username;
    cout << "\t\t\t Enter Password : ";
    cin >> login_password;
    bool account_found = false;

    for (int i = 0; i < n; i++)
    {
      if (login_username == user[i].getUsername() && login_password == user[i].getPassword())
      {
        account_found = true;
        for (int j = 0; j < 7; j++)
        {
          cout << "\t\t\t Your monthly spending on " << user[i].category[j][0] << " is " << user[i].category[j][1] << endl;
        }
        cout << "You Saved " << user[i].getSaving()<< endl;
      }
    }
    if (!account_found)
    {
      cout << "\t\t\t Username Or Password is wrong\n";
    }

    char another_analysis;
    cout << "\t\t\t Want Analysis of another account? Y/N";
    cin >> another_analysis;

    if (another_analysis != 'Y' && another_analysis != 'y')
    {
      break;
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