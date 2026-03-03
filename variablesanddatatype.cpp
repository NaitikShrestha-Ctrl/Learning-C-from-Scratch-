/*
// Declare an integer variable called age and assign it a value of 25. Then, declare a double variable called height and assign it a value of 5.9. Print both of these values.

#include <iostream>
using namespace std;
int main ()
{
    int age = 25;
    double height = 5.9;

    cout << "The age of Luffy is " << age << " and the height of Luffy is " << height <<" ." << endl;  

    return 0;
}
*/


/*
// Create a character variable called grade and assign it the value 'A'. Then, declare a boolean variable called passed and set it to true. Display both of them.

#include <iostream>
using namespace std;
int main()
{
    char grade = 'A';
    bool passed = "True";

    cout << "Luffy got " << grade << " grade in this exam," << " So he is passed in this exam " << passed  <<"."<< endl;

    return 0;
}
*/


/*
// What happens if you try to assign a floating-point value to an integer variable? Write a small code snippet that demonstrates this behavior.

#include <iostream>
using namespace std;
int main()
{
    int x = 12.11; 
//I have assigned double/float value to and interger as question asked by doing this int data type will only take 12 casue interger store whole number only it does not store decimal numbers.

    cout <<"The interger is " << x <<endl; 
// So the out will be 12 cause int data type does not store decimal.

    return 0;
}
*/


/*
// Declare a long integer variable called population and assign it a large number (e.g., 8,000,000,000). Then, declare a short integer called temperature and set it to -5. Print both values.

#include <iostream>
using namespace std;
int main ()
{
    long long population= 100000000000; //here i have used long cause int can only hold 4bites so i have used long long which can hold 8 bites 
    int temperature = -5;

    cout <<"The total population of Vinland is " << population << endl;
    cout <<"The temperature of Vinland is " << temperature <<endl;

    return 0;
}
*/


// Write a program that declares a float variable called price, a char variable called currency, and an integer variable called quantity. Assign them sample values (e.g., price = 19.99, currency = '$', quantity = 3). Calculate the total price and print it.

#include <iostream>
using namespace std;
int main()
{
    float price = 19.9;
    char currency ='$';
    int quantity = 12;

    double total = price * quantity;

    cout <<"The Total price of Anime Stricker is " <<currency << total <<endl;

    return 0;
}
