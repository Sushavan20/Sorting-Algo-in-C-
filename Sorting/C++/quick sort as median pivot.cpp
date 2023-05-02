#include<iostream>
using namespace std;

int count=0;
void swap(int &a,int &b)
{
	int temp=a;
	a=b;
	b=temp;
}

int part_mid(int arr[],int low,int high)
{
	int pivot=arr[(low+high)/2];
	int left=low;
	int right=high+1;
	while (left<right)
    {
       while (left<=right && arr[left]<pivot && ++count)
            left++;
        while (right>=low && arr[right]>pivot && ++count)
            right--;
        if (left<right)
            swap(arr[left],arr[right]);
    }
	return right;
}
int quick_sort(int arr[],int low,int high)
{
	int key;
	if(low<=high)
    {
		key=part_mid(arr,low,high);
		quick_sort(arr,low,key-1);
		quick_sort(arr,key+1,high);
	}
}
int main()
{
	int n;
	cout<<"Enter the size of array: ";
	cin>>n;
	cout<<"Enter the items: ";
	int a[n];
	for(int i=0;i<n;++i)
		cin>>a[i];
	quick_sort(a,0,n-1);
	cout<<"The sorted array is"<<endl;
	for(int i=0;i<n;++i)
		cout<<a[i]<<" ";
    cout<<endl;
    cout<<"Total number of comparison: "<<count<<endl;
    return 0;
}


