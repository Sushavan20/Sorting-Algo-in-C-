#include <iostream>
using namespace std;
int count=0;

void insertion_sort(int arr[], int n)
{
    int i,key,j,p=0;
    for (i=1;i<n;i++)
    {
        key=arr[i];
        j=i-1;
        while (j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
            ++count;
        }
        arr[j+1]=key;
        cout<<"Pass"<<p+1<<": ";
        for (int i=0;i<n;i++)
            cout<<arr[i]<<" ";
        cout<<endl;
        ++p;
    }
}
/*
void insertion_sort(int arr[], int n) //recursion
{
    if (n<=1)
        return;
    int i,j,key;
    for (i=1;i<n;i++)
    {
        key=arr[i];
        j=i-1;
        while (j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
            ++count;
        }
        arr[j+1]=key;
    }
    insertion_sort(arr,n-1);
}
*/

int main()
{
    int arr[30],n;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the array:"<<endl;
    for (int i=0;i<n;i++)
        cin>>arr[i];
    insertion_sort(arr,n);
    cout<<"Sorted array: ";
    for (int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    cout<<"Count: "<<count<<endl;
    return 0;
}

