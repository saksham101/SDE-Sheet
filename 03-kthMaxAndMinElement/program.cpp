// Method 1

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {5, 4, 6, 8, 10, 7}, size = 6, k = 2, max, min;
    sort(arr, arr + size);
    cout<<"MAX "<<arr[size-k]<<endl;
    cout<<"MIN "<<arr[k-1];

    return 0;
}
