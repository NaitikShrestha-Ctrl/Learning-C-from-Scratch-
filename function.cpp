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