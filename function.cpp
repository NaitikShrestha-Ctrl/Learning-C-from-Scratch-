/*

#include<iostream>
using namespace std;

void first()
{
    cout << "Hello World I am Luffy" <<endl;
}

int main()
{
    
    first();

    return 0;
}

*/


/*

#include<iostream>
using namespace std;

void second(string name, int age, float height)
{
    cout << "Hello your name is " <<name <<". Your age is " <<age <<". Your height is " <<height <<endl;
}

int main()
{
    second("Luffy", 17, 5.6);
    second("Zoro", 18, 5.3);
    second("Sanji", 19, 5.8);

    return 0;
}

*/


/*

// Simple math using function

#include<iostream>
#include<cmath>
using namespace std;

float simple(int a, int b, int c, int d, int e )
{
    return a + b - c * d / e ;
}

int main()
{
    int result = simple(34, 67, 45, 10, 12);
    cout << "Total answer is : " <<result;

    return 0;
}

*/

/*

// Simple math using function asking user input

#include<iostream>
#include<cmath>
using namespace std;

float simple(int a, int b, int c, int d, int e )
{
    return a + b - c * d / e ;
}

int main()
{
    int a,  b, c, d, e;
    
    cout << "Enter a number: ";
    cin >> a;

    cout << "Enter a number: ";
    cin >> b;

    cout << "Enter a number: ";
    cin >> c;

    cout << "Enter a number: ";
    cin >> d;

    cout << "Enter a number: ";
    cin >> e;

    float result = simple(a, b, c, d, e);
    cout << "Answer is : " << result <<endl;

    return 0;
}

*/

/*

//Write a C++ program that creates a function greet() which prints "Hello, Welcome to C++ Programming!".

#include <iostream>
using namespace std;

void greet() //here i used void because  just to print we dont need anything in return so
{
    cout << "Hello, Welcome to C++ programming" <<endl;
}

int main()
{
    greet();

    return 0;
}

*/


/*

// Write a C++ program that creates a function addNumbers(int a, int b) to calculate and display the sum of two numbers.

#include <iostream>
using namespace std;

int addNumbers(int a, int b) // here i simply i created function 
{
    return a +b; //here i code what to do in this function
}

int main()
{
    int a = 1000;  // given a value 
    int b = 27000; // given b value
    
    int result = addNumbers(a,b); //here i called function 

    cout << "The added number is: " <<result ; // here just printed the output

    return 0;
}

*/


/*

//Write a C++ program that creates a function square(int num) that returns the square of a number.

#include <iostream>
#include <cmath>
using namespace std;

int square(int num) // here i simply i created function 
{
    return num*num ; // here i code what to do in this function
}

int main()
{
    int num = 12345; // given num value 

    int result = square(num); //here i called function 

    cout<< "The square is : " <<result; // here just printed the output

    return 0;
}
    


//Write a C++ program that creates a function square(int num) that returns the square of a number.(asking user input)

#include<iostream>
#include<cmath>
using namespace std;

int square(int num) // here i simply created function 
{
    return num*num; // here i code what to do in this function
}

int main()
{
    int num;

    cout <<"Enter the num you wanna get square of: ";
    cin >> num; // asking user for input

    int result = square(num);  //here i called function 

    cout<<"The square of given number is: " <<result; // printed the output

    return 0;
}

*/


//Write a C++ program that creates a function findMax(int a, int b) to find and return the largest number between two numbers. asking user for input

#include<iostream>
using namespace std;

int findMax(int a, int b)
{
    return max(a, b);
}

int main()
{
    int a;
    int b;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    int result = max(a,b);

    cout << "The largest number of given numbers is: " << result;

    return 0;

}