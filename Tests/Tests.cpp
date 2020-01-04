
#include <iostream>

using namespace std;
int factorial(int);
int getSum(int);
int myFunc(int, int);

int myFunc(int from, int to) {
	if (from == to)
	{
		return from;
	}
	if (from > to)
	{
		return 0;
	}
	return from+myFunc(from+1,to);
}
int main()
{
	int input;
	cout << "enter a number foreign";
	cin >> input;
	cout << myFunc(0,input) << endl;
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
int getSum(int a) {
	int sum = 0;
	for (int i = 0; i < a + 1; i++) {
		cout << sum << "+" << i << "=";
		sum += i;
	}
	cout << "(" << sum << ")" << endl;
	return sum;
}

