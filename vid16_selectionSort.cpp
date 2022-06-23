#include <iostream>
using namespace std;
int main(){
    int arr[5]={41,32,26,19,84};
    for (int i = 0; i < 4; i++)
    {
        int minIndex = i;
        for (int j = i+1; j < 5; j++)
        {
            if (arr[j]<arr[minIndex])
            {
                minIndex = j;
            }
        }
       swap(arr[i],arr[minIndex]); 
    }
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

// time complexity - O(n^2)
// space complexity - O(1) i.e. constant space