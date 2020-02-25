#include <iostream>
using namespace std;

//function template to print an array
//works for multiple data types

template <class T>
void printarray (T *a, const int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << "  ";
	cout << endl;
} 

template <class T>
void smallest(T *a, const int n)
{
	T small, smaller;
	small = a[0];
	smaller = a[1];
	for (int i = 0; i < n; i++) 
	{
		if (a[i] < smaller)
		{
			if (a[i] < small)
				small = smaller;
			smaller = a[i];
		}
		if (a[i] < small) //but not less than smaller
		{
			small = a[i];
		}
		//if it is not smaller than either, nothing changes and the loop continues
	}
	cout << "The smallest value is "" << smaller << ", and the second smallest is " << small << endl;
}

int main()
{
	const int n1 = 5, n2 = 7, n3 = 6;
	int a[n1] = {2, 4, 6, 8, 10};
	float b[n2] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7};
	char c[n3] = "HELLO";

	cout <<"the integer array" << endl;
	printarray(a, n1);

	cout <<"the float array" << endl;
	printarray(b,n2);

	cout <<"the string is" << endl;
	printarray(c,n3);
	return 0;
}

/*
the integer array
2  4  6  8  10
the float array
1.1  2.2  3.3  4.4  5.5  6.6  7.7
the string is
H  E  L  L  O 
*/

