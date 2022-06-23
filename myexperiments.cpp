#include<iostream>
#include<stack>
using namespace std;

int findElement(int array[],int element,int size){
    for(int i=0;i<size;i++){
        if (array[i]==element)
        {
            return i;
        }
    }
    return 0;
}


int main()
{
    cout<<"Enter the element you want to search"<<endl;
    int element;
    cin>>element;
    cout<<"Enter the size of aaray"<<endl;
   int size;
   cin>>size;
   int arr[100];
   for (int i = 0; i < size; i++)
   {
    cin>>arr[i];
   }
//    int arr[10]={1,2,3,4,5,6,78,9,5,76};
   cout<<findElement(arr,element,size)<<endl;
    return 0;
}

