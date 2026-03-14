// Write a C++ program that takes a number (1–7) from the user and uses a switch statement to print the day of the week (1 = Monday, 2 = Tuesday, …, 7 = Sunday).

#include<iostream>
using namespace std;
int main()
{
    int day;
     cout << "Enter one number from 1 to 7: " ;
     cin >> day;

    switch (day)
    {
        case 1:
            cout << "Monday";
            break;

        case 2:
            cout << "Tuesday";
            break;
    
        case 3:
            cout << "Wednesday";
            break;
    
        case 4:
            cout << "Thursday";
            break;

        case 5:
            cout << "Friday";
            break;

        case 6:
            cout << "Saturday";
            break;

        case 7:
            cout << "Sunday";
            break;


    default:
        cout << "Wrong Input Please Select one from 1 to 7 " <<endl;
        break;
    }

    return 0;
}