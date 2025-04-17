#include <iostream>
#include <iomanip>
#include <stdlib.h> 
using namespace std;

class Array
{
	friend ostream& operator << (ostream&, const Array&);
	friend istream& operator >> (istream&, Array&);


public:
	Array(int = 10);
	Array(const Array&);
	~Array();
	int getSize() const;
	const Array& operator = (const Array&);
	bool operator == (const Array&) const;
	bool operator != (const Array& right) const
	{
		return !(*this == right);
	}

	int& operator [](int);
	int operator[](int) const;
	Array operator+(const Array&)const;
	Array operator>>(int);
	int operator+();
private:
	int size;
	int* ptr;

};

Array::Array(int arraySize) : size(arraySize) // Specifying the size of the array and error checking to ensure the size of arr
{
	if (size < 0) {
		cerr << "\nError: Array size cannot be negative\n";
		exit(1);
	}

	ptr = new int[size]; 
	for (int i = 0; i < size; i++) {
		ptr[i] = 0;
	}
}

Array::Array(const Array& arrayToCopy) : size(arrayToCopy.size)//Copy constructor responsible for creating a new instance of the Arr class
{
	ptr = new int[size];
	for (int i = 0; i < size; i++) {
		ptr[i] = arrayToCopy.ptr[i];
	}
}

Array::~Array()
{
	delete[] ptr;
}

int Array::getSize() const //returning the size of the arr
{
	return size;
}

const Array& Array::operator=(const Array& right)
{
	if (&right != this) {
		if (size != right.size) {
			delete[] ptr;
			size = right.size;
			ptr = new int[size];
		}

		for (int i = 0; i < size; i++) {
			ptr[i] = right.ptr[i];
		}
	}
	return *this;
}

bool Array::operator == (const Array& right) const // Comparing two Arr objs for equality
{
	if (size != right.size) 
	{
		return false;
	}
	for (int i = 0; i < size; i++) 
	{
		if (ptr[i] != right.ptr[i]) 
		{
			return false;
		}
	}
	return true;
}

int& Array::operator[](int subscript) // allowing accessing and modifying elements of the arr 
{
	if (subscript < 0 || subscript >= size)
	{
		cerr << "\nError: Subscript " << subscript << " out of range \n"; // reporting error messages during program execution
		exit(1);
	}

	return ptr[subscript];
}

int Array::operator[](int subscript) const
{
	if (subscript < 0 || subscript >= size)
	{
		cerr << "\nError: Subscript " << subscript << " out of range\n";
		exit(1);
	}
	return ptr[subscript];
}

Array Array::operator+(const Array& right)const
{
	int new_size = this->size + right.size;
	Array temp(new_size);
	for (int i = 0; i < size; ++i)
	{
		temp.ptr[i] = ptr[i];
	}

	for (int i = size, j = 0; j < right.size; ++i, ++j)
	{
		temp.ptr[i] = right.ptr[j];
	}
	return temp;
}// Concatenating two arrays

Array Array::operator>>(int k) 
{ 
	Array backup(*this);
	for (int i = 0; i < this->size; i++) 
	{
		int new_index = (i + k) % this->size;
		this->ptr[new_index] = backup.ptr[i];
	}
	Array copy(*this);
	return copy;
}//Array shifting to the left by a specified num of position k
//加 k 的原因是會有位移的現象因此加完之後取餘數一個一個對上去

int Array::operator+() 
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum = sum + this->ptr[i];
	}
	return sum;
};//sum of the array

istream& operator >> (istream& input, Array& a) //Reads arr size from input and assign to the int* ptr
{
	for (int i = 0; i < a.size; i++) {
		input >> a.ptr[i];
	}
	return input;
}

ostream& operator << (ostream& output, const Array& a) // 輸出
{
	int i;
	for (i = 0; i < a.size; i++) {
		output << setw(12) << a.ptr[i];
		if ((i + 1) % 4 == 0)  // Formatting the arr into 4 columns
		{ 
			output << "\n";
		}
	}
	if (i % 4 != 0) 
	{
		output << "\n";
	}
	return output;
}

Array operator+(int left, const Array& right) /*first function allows adding an int to the beginning of an Array object,
and the second function allows adding an int to the end of an Array object.*/  
{
	Array a(1);
	a[0] = left;
	Array b = right;
	Array c = a + b;
	return c;
}

Array operator+(const Array& left, int right) // To allow adding an int to left of Arr
{
	Array a = left;
	Array b(1);
	b[0] = right;
	Array c = a + b;
	return c;
}//這兩個是實現1 + integers1 + 2的東西

int main()
{
	Array integers1(7);
	Array integers2;
	cout << "Size of Array integers1 is " << integers1.getSize() << "\nArray after initialization:\n" << integers1;
	cout << "\nSize of Array integers2 is " << integers2.getSize() << "\nArray after initialization:\n" << integers2;

	cout << "\nEnter 17 integers:" << endl;
	cin >> integers1 >> integers2;
	cout << "\nAfter input, the Arrays contain:\n" << "integers1:\n" << integers1 << "integers2:\n" << integers2;
	cout << "\nEvaluating: integers1 != integers2" << endl;

	if (integers1 != integers2) cout << "integers1 and integers2 are not equal" << endl;
	Array integers3(integers1);
	cout << "\nSize of Array integers3 is " << integers3.getSize() << "\nArray after initialization:\n" << integers3;

	cout << "\nAssigning integers2 to integers1:" << endl;
	integers1 = integers2;

	cout << "integers1:\n" << integers1 << "integers2:\n" << integers2;
	cout << "\nEvaluating: integers1 == integers2\n";

	if (integers1 == integers2) {
		cout << "integers1 and integers2 are eaqul\n";
	}

	cout << "\nintegers1[5] is " << integers1[5];
	cout << "\n\nAssigning 1200 to integers1[5]" << endl;
	integers1[5] = 1200;

	cout << "integers1:\n" << integers1;
	cout << "integers2:\n" << integers2;
	cout << "integers3:\n" << integers3;

	Array C;
	C = integers1 + integers2 + integers3;
	cout << "Array C = integers1 + integers2 + integers3\n" << C;
	int k = 33;
	C >> k;
	cout << "\nShifting the elements of C to the RIGHT by " << k << " places:\n" << C;
	cout << "\nThe sum of the elements in array C = " << +(C >> 1);
	cout << "\nArray integers1 = 1 + integers1 + 2:\n" << 1 + integers1 + 2;
	integers1 = 1 + integers1 + 2;
	cout << "\nArray integers1:\n" << integers1 << '\n';

	cout << "\nAttempt to assign 1000 to integers1[15]" << endl;
	integers1[15] = 1000;
}