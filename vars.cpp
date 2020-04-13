#include <iostream>

using namespace std;

int glb_var_1 = 0;
int glb_var_2 = 0;

int main()
{
	const int size = 2;
	int local_var_1 = 0;
	int local_var_2 = 0;

	int *dynamic_var_1 = new int[size];
	int *dynamic_var_2 = new int[size];
	for (int i = 0; i < size; i++)
	{
		dynamic_var_1[i] = 1;
		dynamic_var_2[i] = 1;
	}
	cout << "glb_var_1:" << &glb_var_1 << endl;
	cout << "glb_var_1:" << &glb_var_2 << endl;
	cout << "local_var_1:" << &local_var_1 << endl;
	cout << "local_var_2:" << &local_var_2 << endl;
	cout << "dynamic_var_1:" << dynamic_var_1 << endl;
	cout << "dynamic_var_2:" << dynamic_var_2 << endl;
	delete [] dynamic_var_1;
	delete [] dynamic_var_2;
	return 0;
}
