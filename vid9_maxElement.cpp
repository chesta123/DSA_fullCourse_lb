#include <iostream>
#include<climits>
using namespace std;



int main()
{
    int array[5]= {3,6,1,8,32};
    
    cout<<maxElement(array,5)<<endl;
    
    return 0;
}

int maxElement(int array[],int size){
        int max = INT_MIN;
        for (int i=0;i<size;i++) {
            if(array[i]>max){
                max=array[i];
            }
        }
return max;
}