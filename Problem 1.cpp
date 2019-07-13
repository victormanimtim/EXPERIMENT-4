#include<iostream>
#include<iomanip>
#include<conio.h>
#include<cmath>

using namespace std;


int main()

{
    char operation;
    float x, y;

	cout << "SIMPLE CALCULATOR"<<endl<<endl;

    cout << "Enter the first number: ";
    cin >> x;

	cout << "Enter the second number: ";
	cin >> y;

	cout << "Enter the number  of which operator you need to use:"<<endl;
	cout << "1. Add "<<endl;
	cout << "2. Subtract"<<endl;
	cout << "3. Multiply "<<endl;
	cout << "4. Divide"<<endl;
	cout << "5. Modulus"<<endl;
	
	
	cin >> operation;

    switch(operation)
    {
        case '1':
            cout << x + y;
            break;

        case '2':
            cout << x - y;
            break;

        case '3':
            cout << x * y;
            break;

        case '4':
            cout << x / y;
            break;

		case '5':
            cout << x  % y;

            break;

        default:
            cout << "INVALID INPUT";
            break;
    }
	getch();
    return 0;
}