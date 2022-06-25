// finding mountain element in an array
#include<iostream>
using namespace std;

int mountainElement(int array[],int size){
    int start = 0;
    int end = size-1;
    int mid = start+(end-start)/2;
    while(start<=end){
        if(array[mid]<array[mid+1]){
            start = mid+1; 
        }
        else{
            end = mid;
        }
        mid = start+(end-start)/2;

    }
    return start; 
    // thought by dry run  
}


int main(){
    cout<<"hellooo";
    int arr[8]={1,2,34,67,15,9,8,1};
    int key = mountainElement(arr,8);
    cout<<"max index id"<<key<<endl;
}
