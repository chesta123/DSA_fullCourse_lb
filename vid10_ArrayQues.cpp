#include <iostream>
using namespace std;

void reverse(int arr[], int size)
{
    for (int i = 0; i < size; i = i + 2)
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
}

void PrintArray(int arr[], int size)
{
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[5] = {6, 87, -1, -21, 50};
    reverse(arr, 5);
    PrintArray(arr, 5);
    return 0;
}

//                               Question 2 (Finding one duplicate number in array)

#include <iostream>
using namespace std;

int findDuplicate(int array[], int n)
{
    int Duplicate;
    for (int i = 0; i < n; i++)
    {
        if (array[i] == array[i + 1])
        {
            Duplicate = array[i];
        }
    }
    return Duplicate;
}
// will work only when array is sorted,so add sorting algorithm too if we want fully functional code.
int main()
{
    int array[7] = {1, 2, 3, 4, 5, 5, 6};
    cout << findDuplicate(array, 7);
    return 0;
}

//                                                   Question 2 #method 2

#include <iostream>
using namespace std;
int FindDuplicate(int arr[],int n){
    int ans = 0;
    for(int i=0;i<n;i++){
        ans = ans^arr[i];
    // taking XOR of all elements in array
    }
    for (int i = 1; i < n; i++)
    {
        ans = ans^i;
    // taking XOR of all elements of array with numbers from 1 to (size-1) so that unique numbers will cancel each other.
    }
    return ans;
}
int main()
{
    int arr[10] = {9,3,5,1,7,2,8,4,6,3};
    cout<<FindDuplicate(arr,10);
}


//                                      Question 3 (Finding all duplicate numbers in array)

#include <iostream>
using namespace std;
int main(){
    int arr[10] = {8, 3, 1, 1, 7, 7, 8, 4, 6, 3};
    // sort and then apply ques 2 method 1
}


//                                   Question 4 (Sort 0 and 1 in array) #2 pointer approach



#include <iostream>              
using namespace std;
void sort(int arr[],int n){
    int i = 0;
    int j = n-1;
    while (i<=j)
    {
        if (arr[i]==0 && i<=j)
        {
            i++;
        }
        if (arr[j]==1 && i<=j)
        {
            j--;
        }
        if (arr[i]==1 && arr[j]==0 && i<=j)
        {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
}

void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}

int main(){
    int arr[6]={0,1,1,1,0,0};
    sort(arr,6);
    printarray(arr,6);
    return 0;
}


//                                     Question 4 (sort 1,0,2)


#include<iostream>
using namespace std;
void sort(int arr[],int n){
    int start = 0 , mid =0 , end = n-1;
    while (mid<=end)
    {
        if (arr[mid]==0 && mid<=end)
        {
            swap(arr[start],arr[mid]);
            mid++;
            start++;
        }
        if (arr[mid]==1 &&mid<=end)
        {
            mid++;
        }
        if (arr[mid]==2 && mid<=end)
        {
            swap(arr[mid],arr[end]);
            end--;
        }
    }
}

void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}
    
int main(){
    int arr[5] = {2,1,0,0,2};
    sort(arr,5);
    printarray(arr,5);
}