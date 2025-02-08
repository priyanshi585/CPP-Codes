#include <iostream>
using namespace std;
int main()
{
    int bs , TA, DA, gross_salary;
    cout << "Enter basic salary: " << endl;
    cin >> bs;
    if (bs > 0 && bs <=10000)
    {
         TA = ((bs*10)/100);
         DA = ((bs*5)/100);
        gross_salary = bs + TA + DA;
        cout << "Gross Salary: " << gross_salary << endl;
    }
    else if (bs > 10000)
    {
         TA = ((bs*12)/100);
         DA = ((bs*6)/100);
         gross_salary = bs + TA + DA;
         cout << "Gross Salary: " << gross_salary << endl;
    }
    else
    {
        cout << "Enter a valid basic salary." << endl;
    } 
    return 0;
}