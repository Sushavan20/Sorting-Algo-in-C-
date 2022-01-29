#include <iostream>
using namespace std;
int count=0;

int selection_sort(int a[],int n)
{
    int i,j,p=0,temp;
    for (i=0;i<n-1;i++)
    {
        int minIndex=i;
        for (j=i+1;j<n;j++)
        {
            if (a[minIndex]>a[j])
                minIndex=j;
                ++count;
        }
        temp=a[minIndex];
        a[minIndex]=a[i];
        a[i]=temp;
        cout<<"Pass "<<p+1<<": ";
        for (int i=0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<endl;
        ++p;
    }
}

int main()
{
    int arr[30],n;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the array:"<<endl;
    for (int i=0;i<n;i++)
        cin>>arr[i];
    selection_sort(arr,n);
    cout<<"Sorted array: ";
    for (int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    cout<<"Count: "<<count<<endl;
    return 0;
}


