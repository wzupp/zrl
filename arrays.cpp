#include<iostream>

using namespace std;

int main(int argc, char** argv)

{

	const int size = 3;


	int odnomer_stat_arr[size];

	int* odnomer_dyn_arr = new int[size];


	int dvm_stat_arr[size][size];

	int** dvm_dyn_arr = new int* [size];

	for (int i = 0; i < size;i++)

		dvm_dyn_arr[i] = new int;

	cout << "unidimensional static array :" << endl << endl;

	for (int i = 0;i < size; i++)

		cout << "[" << i << "]" << "address: " << &odnomer_stat_arr[i] << endl;

	cout << endl << endl;

	cout << endl << endl << "unidemensional dynamic array :" << endl << endl;

	for (int i = 0;i < size;i++)

		cout << "[" << i << "]" << "address: " << &odnomer_dyn_arr[i] << endl;

	cout << endl << endl;

	cout << "duodimensional static array :" << endl << endl;

	for (int i = 0;i < size; i++) {

		for (int j = 0;j < size;j++)

			cout << "[" << i << "]" << "[" << j << "]" << "address: " << &dvm_stat_arr[i][j] << endl;

	}

	cout << endl << endl;

	cout << endl << endl << "duodemensional dynamic array :" << endl << endl;
	for (int i = 0;i < size;i++) {

		for (int j = 0; j < size;j++)

			cout << "[" << i << "]" << "[" << j << "]" << "address: " << &dvm_dyn_arr[i][j] << endl;

	}

	delete[] odnomer_dyn_arr;
	for (int i = 0;i < size;++i)

		delete[] dvm_dyn_arr[i];
	delete[] dvm_dyn_arr;
	return 0;

}
