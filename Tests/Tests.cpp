#include <iostream>
#include <string>

using namespace std;
int factorial(int);
int getSum(int);
int myFunc(int, int);
void pointerFoo(int*, int*);

void pointerFoo(int *pa, int *pb) {
	int tmp=*pa;
	*pa = *pb;
	*pb = tmp;
}
void tests() {
	int arr[] = { 4,3,5,7,9,11 };
	int var = 3[arr + 1] - arr[5] + (arr - 1)[4];
	int *pvar = &var;
	int &vardef = arr[6];
	cout << *(pvar)+1 << endl;
	int a = 3, b = 5;
	cout << "a=" << a << "\t b=" << b << endl;
	pointerFoo(&a, &b);
	cout << "a=" << a << "\t b=" << b << endl;
	cout << &var << endl;
	cout << sizeof(arr) << endl;
	cout << sizeof(pvar) << endl;
}

template <class T> void swap_foo(T &ra, T &rb) 
{
	T temp = ra;
	ra = rb;
	rb = temp;
}
void fillArr(int *const arr, const int size) {
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}
}
void showArr(const int *const arr, const int size) {
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void pushBack(int *&arr, int &size, int value) {
	int *midArr = new int[size+1];
	for (int i = 0; i < size; i++)
	{
		midArr[i] = arr[i];
	}
	midArr[size++] = value;
	delete[] arr;
	arr = midArr;
}
int main()
{
	int size = 10, value = 3;
	int *arr = new int[size];
	fillArr(arr, size);
	showArr(arr, size);
	pushBack(arr, size, value);
	showArr(arr, size);
	delete[] arr;



	int a = 10,b=3;
	const int *const pa = &a;
	a = b;
	cout << *pa;
	
	system("pause");
}
int factorial(int N) {
	if (N == 0){
		return 1;
	}
	if (N < 0) {
		return 0;
	}
	return N* factorial(N-1);
}

int myFunc(int from, int to) {
	if (from == to)
	{
		return from;
	}
	if (from > to)
	{
		return 0;
	}
	return from + myFunc(from + 1, to);
}

int getSum(int a) {
	int sum = 0;
	for (int i = 0; i < a + 1; i++) {
		cout << sum << "+" << i << "=";
		sum += i;
	}
	cout << "(" << sum << ")" << endl;
	return sum;
}

