#include <iostream.h>
using namespace std;
int main()
{
	int A['n'];
	int n;
	int h = 10;
	int i;
	cout << "Введите масив";
	cin >> n;
	cout << "Введите элементы масива";

	for (i = 0; i < n; i++){
		cin >> A[i];
	}
		for (i = 0; i < n; i++){
		h = A[i]%h;
		cout<<h<<" сумму всех цифр целочисленного массива ";
		}
	
}