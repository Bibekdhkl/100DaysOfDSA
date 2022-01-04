## Template is also a type of STL which can be used in c++
```
	syntax: template <typename T> or template<class template_name>
```
Did this template Quiz : https://www.geeksforgeeks.org/c-plus-plus-gq/templates-gq/

## One of the nice code to go through again:
Question: 
Given an array Arr of N positive integers and a number K where K is used as a threshold value to divide each element of the array into sum of different numbers. Find the sum of count of the numbers in which array elements are divided.
Input:
N = 5, K = 4
Arr[] = {10, 2, 3, 4, 7}
Output: 8
Explanation: Each number can be expressed as sum of
different numbers less than or equal to K as
10 (4 + 4 + 2), 2 (2), 3 (3), 4 (4) and 7 (4 + 3).
So, the sum of count of each element is 
(3 + 1 + 1 + 1 + 2) = 8.
```
int totalCount(int arr[], int n, int k) {
      // code here
      int total=0,quotient=0,remain=0;
      for(int i=0 ;i<n ;i++){
          quotient=arr[i]/k;
          remain=arr[i]%k;
          if(remain!=0)
              remain=1;
          total=total+(quotient+remain);
      }
      return total;
  }

```
