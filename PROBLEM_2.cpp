
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int x, y, z, size, arr[100];
	
	cout << "Bubble Sorting"<<endl;
	
	cout << "Enter the array size: "; 
	cin >> size;

	for ( x = 0 ; x < size; x++)
	{												
		cin >> arr[x];							
		cout << arr[x] << ", ";				 
	}

	cout << endl << endl;

	for (x = 0 ; x < size ; x++)
	{
		for (y = 0 ; y < size - 1 - x; y++)
		{
			if (arr[y] > arr[y + 1])				
			{										
			z = arr[y];
			arr[y] = arr[y + 1];
			arr[y + 1] = z;
			}
		}
	}
	cout << "after using selection or bubble sort..."<<endl;
	cout << "Sorted data: ";
	for (x = 0 ; x < size ; x++)						
	{
		cout << arr[x] << " ";
	}


	getch();
	return 0;
}

