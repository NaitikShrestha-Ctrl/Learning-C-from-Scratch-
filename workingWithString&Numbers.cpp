/*

// Write a function that takes two strings as parameters and returns their  (i.e., join them together). Test this function with two sample strings.

#include<iostream>
#include<string>

using namespace std;

//This is the function to concatenate two strings.
string concatenateStrings(string first, string second)  
{
    return first + second;
}
    

int main()
{
    string first = "Hello";
    string second = "World";

    string result = concatenateStrings(first, second); // here I have call the function to concatenate.

    cout << result << endl; //here simply i have print the output

    return 0;
}

*/


/*Done wrong becasue question have asked to use peoper function. (But this is also not in correct)

//Write a function that takes a string and returns its length (number of characters). Use a sample string to demonstrate the function.

#include <iostream>
using namespace std;
int main()
{
    string length = "Hello World, My Name is Luffy.";

    cout << "The numbers of characters is " << length.length() <<endl;

    return 0;
}
*/



//Write a function that takes a string and returns its length (number of characters). Use a sample string to demonstrate the function.

#include <iostream>
#include <string>
using namespace std;

int stringslength(string count) //here i have code the function of count the letter.
{
    return count.length();
}
int main()
{
    string text = "Hello World, My Name is Luffy.";

    int result = stringslength(text); //here i have call function to count the letter on string text. 

    cout<< "There is " << result << " number of character in the text string." <<endl; // here i have simply code to print the output.

    return 0;
}