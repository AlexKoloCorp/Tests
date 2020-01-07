
#include <iostream>

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

template <class T> T swap_foo(T &ra, T &rb) 
{
	int temp = ra;
	ra = rb;
	rb = temp;
	return ra, rb;
}
int main()
{	
	int a=5,b=3;
	cout << "a=" << a << "\t b=" << b << endl;
	swap_foo(a,b);
	cout << "a=" << a << "\t b=" << b << endl;
	//int input;
	//cin >> input;
	//cout << myFunc(0,input) << endl;
	//getSum(input);
	//cout << factorial(3) << endl;
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

