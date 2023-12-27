// my first pointer
#include <iostream>
using namespace std;

int main()
{
	int firstvalue, secondvalue;
	int* mypointer;

	mypointer = &firstvalue; // mypointer assigned address of firstvalue using address-of operator &
	*mypointer = 10; // value pointed to by mypointer is assigned value of 10
	mypointer = &secondvalue; // pointer may point to different variables: repeat previous 2 line process
	*mypointer = 20;
	cout << "firstvalue is " << firstvalue << '\n';
	cout << "secondvalue is " << secondvalue << '\n';
	return 0;
}