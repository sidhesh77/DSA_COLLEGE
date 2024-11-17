#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the size of the array"<<endl;
    cin>>size;

    int arr[size];
    cout<<"Enter the elements of the array"<<endl;
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    // now sorting the array 
    for (int i = 0; i < size-1; i++)
    {
        int temp = arr[i];
        for (int j = i+1; j < size; j++)
        {
            if (temp > arr[j])
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i]= temp;
            }   
        }
    }

    // output
    cout<<"Sorted Array: ";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    
    
}
