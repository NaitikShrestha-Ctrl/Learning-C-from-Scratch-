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