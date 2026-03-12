/*

//Write a program that asks the user for their age and prints "You are an adult" if the age is 18 or older; otherwise, print "You are a minor."

#include<iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter your age: "; 
    cin >> age;
    
    if (age >= 18)
    {
        cout << "You are an adult";
    }
    
    else
    {
        cout << "You are minor";
    }


    return 0;
}

*/


/*

// Write a program that asks the user for a number and prints "Positive" if the number is greater than zero; otherwise, print "Non-positive."

#include <iostream>
using namespace std;
int main()
{
    int num;
    cout <<"Enter the number: " ;
    cin >> num;

    if (num > 0)
    {
        cout << "Positive";
    }
    
    else
    {
        cout << "Non-positive";
    }

    return 0;
}
    
*/


/*

//Write a program that checks if a number is even; if it is, print "Even number," otherwise print "Odd number."

#include<iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num; 

    if(num % 2 == 0)
    {
        cout << "The number is even";
    }

    else
    {
        cout << "The number is odd";
    }

    return 0;
}
    
*/


/*

// Write a program that takes a number from the user and categorizes it: if the number is greater than 0, print "Positive"; else if the number is less than 0, print "Negative"; else print "Zero."

#include<iostream>
using namespace std;
int main()
{
    int num;
    cout <<"Ehter the number: ";
    cin >> num;

    if (num > 0)
    {
        cout << "Positive";
    }
    
    else if (num < 0)
    {
        cout << "Negative";
    }

    else
    {
        cout << "Zero";
    }

    return 0;
}

*/


// Write a program that asks the user for a grade (0 to 100) and prints: if the grade is 90 or above, print "A"; else if the grade is 80 or above, print "B"; else if the grade is 70 or above, print "C"; else if it is 60 or above, print "D"; else print "F."

#include<iostream>
using namespace std;
int main()
{
    int grade;
    cout << "Enter grade(0 to 100): ";
    cin >> grade;

    if (grade >= 90)
    {
        cout << "A";
    }

    else if (grade >= 80)
    {
        cout << "B";
    }
    
    else if(grade >= 70)
    {
        cout <<"C";
    }

    else if(grade >= 60)
    {
        cout << "D";
    }

    else
    {
        cout << "F";
    }
    

    return 0;
}