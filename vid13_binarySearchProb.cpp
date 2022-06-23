// finding mountain element in an array
#include<iostream>
using namespace std;

int mountainElement(int array,int size){
    int start = 0;
    int end = size-1;
    int mid = (start+end)/2;
    while(start<end){
        if(array[mid]<array[mid+1]){
            
        }
    }
}


int main(){
    int arr[8]={1,2,34,67,15,9,8,1};
    int key = mountainElement(arr,8);
}
