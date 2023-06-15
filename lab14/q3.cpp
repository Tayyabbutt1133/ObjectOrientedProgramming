#include<iostream>
using namespace std;
template< typename A>
void accecdingsorting(A arr[], A n){
	for (int i = 0; i<n; i++)
	{
		for (int j = i + 1; j<n; j++)
		{
			if (arr[i]>arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	
}

int main(){
	int arr[5] = { 1, 3, 5, 7,9 };
	int size = 5;
	accecdingsorting(arr, size);
	
	cout << "arr in accending:" << endl;
	for (int i = 0; i < size; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << "arr in decending order:" << endl;
	for (int i = size - 1; i >= 0; i--)
			{
				cout << arr[i] << " ";
			}
	return 0;

}
