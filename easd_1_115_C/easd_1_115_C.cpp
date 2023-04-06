//karena untuk membantu menyelesaikan masalah bahasa program
//struktur sequence,dan struktur selection
//memakan banyak memory dan pemprosesan memakan banyak waktu
//quick short karena cara kerjanya membagi dua susunan data
//

#include <iostream>
using namespace std;


int arr[20];
int cmp_count = 0;
int mov_count = 0;
int n;

void input() {
	while (true)
	{
		cout << "masukan panjang array: ";
		cin >> n;

		if (n <= 20)
			break;
		else
			cout << "\nmaksimum panjang array adalah 20"
			<< endl;
	}

	cout << "\n-------------------" << endl;
	cout << "\nEnter Array Element" << endl;
	cout << "\n-------------------" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> arr[i];
	}

	void swap(int j, int i)
	{
		int temp;

		temp = arr[j];
		arr[j] = arr[i];
		arr[i] = temp;
	}

	void selection_sort(int low, int high)
	{
		int pivot, i, j;
		if (low > high)		
			return; 

}






