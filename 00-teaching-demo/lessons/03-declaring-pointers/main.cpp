#include <iostream>
using namespace std;

int main ()
{
	int firstvalue = 5, secondvalue = 15;
	int * p1, * p2;

	p1 = &firstvalue;  // p1 = address of firstvalue
	p2 = &secondvalue; // p2 = address of secondvalue

	/*
	firstValue = 5; secondvalue = 15
	p1 = (address of first value); p2 = (address of second value)
	*p1 = 5; *p2 = 15
	*/

	*p1 = 10;          // value pointed to by p1 = 10
	*p2 = *p1;         // value pointed to by p2 = value pointed to by p1

	/*
	firstValue = 10; secondvalue = 10
	p1 = (address of first value); p2 = (address of second value)
	*p1 = 10 *p2 = 10
	*/

	p1 = p2;           // p1 = p2 (value of pointer is copied)
	*p1 = 20;          // value pointed to by p1 = 20

	/*
	firstValue = 10; secondvalue = 20
	p1 = (address of second value); p2 = (address of second value)
	*p1 = 10 *p2 = 20
	*/

	// firstvalue is 10
	cout << "firstvalue is " << firstvalue << '\n';

	// secondvalue is 20
	cout << "secondvalue is " << secondvalue << '\n';
	return 0;
}