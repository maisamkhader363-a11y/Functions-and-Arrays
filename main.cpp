#include<iostream>
using namespace std;

void displayarray(int A[], int s)
{
	for (int i = 0; i < s; i++)
	{
		cout << A[i] << " ";
	}
}
int findlargest(int A[], int s)
{
	int max = 0;
	for (int i = 0; i < s; i++) {
		if (A[i] > max) {
			max = A[i];
		}
	}
	return max;
}
double calculateavg(int A[], int s)
{
	int sum = 0;
	for (int i = 0; i < s; i++) {
		sum += A[i];
	}
	return (double)sum / s;
}






int main()
{
	int  A[10] ;
	cout << "please enter 10 elements of the array:";
	for (int i = 0; i < 10; i++) {
		cin >> A[i];
	}
	cout << "array elements are:";
displayarray(A, 10);
cout << "largest element is:" << findlargest(A, 10) << endl;
cout << "avarage is:" << calculateavg(A, 10) << endl;
}
