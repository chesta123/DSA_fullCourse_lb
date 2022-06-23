#include <iostream>
using namespace std;

int GetMin(int num[], int n)
{
    // int min = INT16_MAX;
    int minimum;
    for (int i = 0; i < n; i++)
    {
        // if (num[i] < min)
        // {
        //     min = num[i];
        // }
        minimum = min(num[i],minimum);
    }
    return minimum;

}

int GetMax(int num[], int n)
{
    int max = INT16_MIN;
    for (int i = 0; i < n; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
        }
    }
    return max;

}

int main()
{
    int size;
    cin >> size;
    int num[100];
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }
    cout << "The maximum value is" << GetMax(num, size) << endl;
    cout << "The minimum value is" << GetMin(num, size) << endl;
}