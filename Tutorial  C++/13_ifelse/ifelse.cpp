#include <iostream>

using namespace std;

int main()
{
	int  a;

	cout << "masukan angka =  ";
	cin >> a;

	if (a == 5) {
		cout << "Nilai ini adlah 5" << endl;
	} else if(a == 3){
		cout << "nilai ini adalah 3" << endl;
	} else if (a == 1){
		cout << "nilai ini adalah 1" << endl;
	} else {
		cout << "buka 5, 3, atau 1" << endl;
	}
	cout << "selesai" << endl;
	cin.get();
	return 0;
}
