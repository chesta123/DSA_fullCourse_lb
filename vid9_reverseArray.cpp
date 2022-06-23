#include <iostream>
using namespace std;
void reverse(int arr[], int size)
{
    for (int i=0;i<2;i++)
    {
        swap(arr[i],arr[size-1-i]);
    }
//     int start = 0;
//     int end = n-1;

//     while(start<=end) {
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
}
void PrintArray(int arr[], int size)
{
    for (int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[5] = {6, 87, -1, -21, 50};
    reverse(arr, 5);
    PrintArray(arr, 5);
    return 0;
}



//  max min array
int array[5]={1,2,35,4,87}