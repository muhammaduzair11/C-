#include<iostream>
using namespace std;

int main()
{
    // VARIABLES
    int monthly_budget = 0;
    int saving, saving_goal;
    bool program_run = true;


    // MAIN PROGRAM RUN
    while (program_run)
    {

      // MENU
      cout << "\t\t\t ######## Finance Managment ########\n";
      cout << "\t\t\t 1). Set Monthly Budget\n \t\t\t 2). Set Saving Goal\n \t\t\t 3). Set categories limit\n \t\t\t 4). Savings This month  5). Analyse my spending\n \t\t\t ######## CHOOSE YOUR DESIRED OPERATION: ";

      int choice;
      cin >> choice;

      if (choice == 1)
      {
        cout << "Your current monthly budget is " << monthly_budget << endl;
        cout << "\t\t\t Set your monthly budget: ";
        cin >> monthly_budget;
        while(monthly_budget <= 0)
        {
          cout << "Enter a valid budget\n";
          cout << "\t\t\t Set your monthly budget: ";
          cin >> monthly_budget;
          cout << "Your budget has been set to " << monthly_budget << endl;

          cout << "\n\n\n";
        }
        
      }
      




      
    }
    
    return 0;
}