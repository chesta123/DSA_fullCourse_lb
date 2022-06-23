#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {41, 32, 26, 19, 84};
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4 - i; j++)
        {
            if (arr[j + 1] < arr[j])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
        // printing one element of array and a space
    }
    return 0;
}

// time complexity - O(n) for already sorted array and O(n^2) for unsorted array
// space complexity - O(1) i.e. constant space
// doubt - optimisation for already sorted array