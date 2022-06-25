#include <iostream>
using namespace std;
int main(){
    // in insertion sort we shift the values not swap
    int array[5] = {54,23,1,7,45};
    // assuming 54 as sorted element
    for(int i = 1; i<5 ; i++){
        // after each round array till ith elements will be sorted
        int temp = array[i];
        int j = i-1;
        for(; j>=0 ; j--)
        {
            if (array[j]>temp)
            {
                // shifting of elements in fwd direction 
                array[i]=array[j];
            }
            else{
                break;
            }
        }
        array[j+1] = temp;
        // by observation 
    }
    for (int i = 0; i < 5; i++)
    {
        cout<<array[i]<<" ";
    }
    return 0;
}


// best case  - sorted array , time complexity = O(n)
// worst case - reverse array , time complexity = O(n^2)
// space complexity = O(1) i.e. constant