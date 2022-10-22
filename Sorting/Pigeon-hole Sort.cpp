#include <bits/stdc++.h>
using namespace std;

void pigeonholeSort(int arr[], int n)
{
	int min = arr[0], max = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] < min)
			min = arr[i];
		if (arr[i] > max)
			max = arr[i];
	}
	int range = max - min + 1; 

	// Create an array of vectors as size of array
	// Each vector represents a hole that is going to contain matching elements.
	vector<int> holes[range];

	for (int i = 0; i < n; i++)
		holes[arr[i]-min].push_back(arr[i]);

	int index = 0; 
	for (int i = 0; i < range; i++)
	{
	vector<int>::iterator it;
	for (it = holes[i].begin(); it != holes[i].end(); ++it)
			arr[index++] = *it;
	}
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
	//int arr[] = {8, 3, 2, 7, 4, 6, 8};

	pigeonholeSort(arr, n);
    cout<<"Sorted order is : ";
	for (int i = 0; i < n; i++)
		cout<<arr[i]<<" ";
    cout<<endl;
	return 0;
}
