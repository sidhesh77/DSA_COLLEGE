#include<iostream>
using namespace std;
int main()
{
    int size ;
    cout<<"Enter the size of the element"<<endl;
    cin>>size;

    int arr[size];
    cout<<"Enter the elements of the array"<<endl;
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            if (arr[i]>arr[j])
            {
                swap(arr[i],arr[j]);
            }
        }
    }
    cout<<"Sorted Array:";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }

    
    
    
}
