#include <iostream>
using namespace std;

void update(int check[],int size){
    check[1]=6;
    for (int i = 0;i<size;i++){
        cout<<check[i];
    }cout<<endl;
}
int main(){
    int arr[3] = {1,2,3};
    update(arr,3);
    for (int i = 0;i<3;i++){
        cout<<arr[i];
    }
}