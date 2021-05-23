# 03 Find the "Kth" max and min element of an array

## Method 1
<h3> kth max and min element of an array </h3>

``` cpp
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
```
complexity O(nlogn)
