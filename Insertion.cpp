#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter the size of the array - " << endl;
    cin >> size;

    int arr[size];
    cout<<"Enter the elements of the array - "<<endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    // now applying the insertion sort
    int temp;
    for (int i = 1; i < size; i++)
    {
        temp = arr[i];
        int j = i - 1;
        while ( j >= 0 && arr[j] > temp)
        {
                arr[j + 1] = arr[j];
                j--;
            }
           arr[j+1] = temp;
        }
    cout<<"Sorted Array : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
