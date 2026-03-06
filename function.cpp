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


#include<iostream>
using namespace std;

void second(string name, int age, float height)
{
    cout << "Hello your name is " <<name <<". Your age is " <<age <<". Your height is " <<height;
}

int main()
{
    second("Luffy", 17, 5.6);

    return 0;
}