#include <iostream>
using namespace std;
int binarySearch(int arr[],int size,int key){
    int start=0;
    int end = size-1;
    int mid=start+(end-start)/2;
while (start<end)
{
    if(key==arr[mid]){
        return mid;
    }

    else if(key>arr[mid]){
        start=mid+1;
    }

    else{
        end=mid-1;
    }
    mid=start+(end-start)/2;
}
    return -1;
}
int main(){
    int key;
    cout<<"Enter the key you want to search"<<endl;
    cin>>key;
    int array[8]={1,3,6,7,7,7,7,9};
    int ans = binarySearch(array,8,key);
    cout<<"The index is "<<ans;
}




