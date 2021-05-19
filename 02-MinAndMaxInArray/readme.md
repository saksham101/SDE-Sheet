# 02 Find the maximum and minimum element in an array

## Method 1
<h3> Linear search </h3>

``` cpp
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10}, size = 10, start = 0, end = 9, max, min;

    if(size == 1){
      max = arr[0];
      min = arr[0];
    }
    else {
      for(start = 0; start <= end; start++) {
        if(max < arr[start]) {
          max = arr[start];
        }
        if(min > arr[start]) {
          min = arr[start];
        }
      }
    }

    cout<<"MAX "<<max<<endl;
    cout<<"MIN "<<min;

    return 0;
}
```

complexity O(n)

## Method 2
<h3> pair comparison </h3>

``` cpp
#include<bits/stdc++.h>
using namespace std;
int Max, Min;

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10}, size = 10, start = 0, end = 9;
    Max = Min = arr[0];
    if(size == 1){
        Max = Min = arr[0];
    }
    else if(size == 2) {
        if(arr[0] > arr[1]) {
            Max = arr[0];
            Min = arr[1];
        }
        else {
            Max = arr[1];
            Min = arr[0];
        }
    }
    else {
        while(start < end) {
            if(arr[start] > arr[start+1]) {
                if(arr[start] > Max)
                    Max = arr[start];
                if(arr[start+1] < Min)
                    Min = arr[start+1];
            }
            else {
                if(arr[start+1] > Max)
                    Max = arr[start+1];
                if(arr[start] < Min)
                    Min = arr[start];
            }
            start += 2;
        }
    }

    cout<<"MAX "<<Max<<endl;
    cout<<"MIN "<<Min;

    return 0;
}
```

complexity O(n)
