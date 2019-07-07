// ProductOfButOneElement.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

vector<int> productOfButOneElement(vector<int> list) {
	int totalProduct = 1;
	for (int elem : list) {
		totalProduct *= elem;
	}
	for (int i = 0; i < list.size(); i++) {
		list[i] = totalProduct / list[i];
	}
	return list;
}

//cannot use division (assuming we maintain complexity)
vector<int> productOfButOneElementBonus(vector<int> list) {
	
	return list;
}

int main()
{
	vector<int> list = { 1, 2, 3, 4, 5 };

	vector<int> sol = productOfButOneElement(list);
	for (int elem : sol) {
		cout << elem << " ";
	}
	cout << endl;

	sol = productOfButOneElementBonus(list);
	for (int elem : sol) {
		cout << elem << " ";
	}
	cout << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
