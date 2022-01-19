# My-Tuts

## 1. SUM

Given an integer array arr of size n, you need to sum the elements of arr.Given an integer array arr of size n, you need to sum the elements of arr.

Example:

```
Input:
n = 3
arr[] = {3 2 1}
Output: 6
```

## 2. Wave array

Given a sorted array arr[] of distinct integers. Sort the array into a wave-like array and return it
In other words, arrange the elements into a sequence such that `arr[1] >= arr[2] <= arr[3] >= arr[4] <= arr[5].....`

If there are multiple solutions, find the lexicographically smallest one.

Example:

```
Input:
n = 5
arr[] = {1,2,3,4,5}
Output: 2 1 4 3 5
Explanation: Array elements after
sorting it in wave form are
2 1 4 3 5.
```

## 3. Find key

Given an sorted array of size N elements.Array contains only positive numbers. Find the index of a given key. If key is not present in the array return -1.

Example:

```
Input:
n=5
1,2,3,4,5
k=3
Output: 2
```

## 4. Count 0's

Given an array of size N consisting of only 0's and 1's. The array is sorted in such a manner that all the 1's are placed first and then they are followed by all the 0's. Find the count of all the 0's.

Exmaple:-

```
Input:
N = 12
Arr[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0}
Output: 3
Explanation: There are 3 0's in the given array.

```

## 5. Count 0's

Given an array of size N consisting of only 0's and 1's. The array is sorted in such a manner that all the 0's are placed first and then they are followed by all the 0's. Find the count of all the 0's.

Exmaple:-

```
Input:
N = 12
Arr[] = {0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1}
Output: 6
Explanation: There are 6 0's in the given array.
```

## 6. Segregate 0s and 1s

Given an array of length N consisting of only 0s and 1s in random order. Modify the array to segregate 0s on left side and 1s on the right side of the array.

Example:

```
Input:
N = 5
arr[] = {0, 0, 1, 1, 0}
Output: 0 0 0 1 1

```

## 7. Leaders in an array

Given an array A of positive integers. Your task is to find the leaders in the array. An element of array is leader if it is greater than or equal to all the elements to its right side. The rightmost element is always a leader.

Example:

```
Input:
n = 6
A[] = {16,17,4,3,5,2}
Output: 17 5 2
Explanation: The first leader is 17
as it is greater than all the elements
to its right.  Similarly, the next
leader is 5. The right most element
is always a leader so it is also
included.

```

## 8. Rotate array

Given an unsorted array arr[] of size N. Rotate the array to the left (counter-clockwise direction) by 1 steps.

Example

```
Input:
N = 5
arr[] = {1,2,3,4,5}
Output: 2 3 4 5 1
Explanation: 1 2 3 4 5  when rotated
by 1 elements, it becomes 2 3 4 5 1.
```

## 9. Sort an array of 0s, 1s and 2s

Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.

Example:

```
Input:
N = 5
arr[]= {0 2 1 2 0}
Output:
0 0 1 2 2
Explanation:
0s 1s and 2s are segregated
into ascending order.
```

## 10. Remove duplicates

Given an sorted array with `n` elements, remove all duplicates in-place and return the new length.

Do not allocate extra space for another array, you must do this by modifying the input array in-place with `O(1)` extra memory.

Example:

```
Input:
N = 6
arr[] = {1,1,2,3,4,4}
Output: 4
```

## 11. Remove element

Given an array and a value val, remove all instances of that value in-place and return the new length.

Do not allocate extra space for another array, you must do this by modifying the input array in-place with `O(1)` extra memory.

The order of elements can be changed. It doesn't matter what you leave beyond the new length.

Example:

```
Input:
N = 4
arr[] = {3,2,2,3}
val = 3
Output: 2
```

## 12. Bitonic Point

Given an array arr of n elements which is first increasing and then may be decreasing, find the maximum element in the array.
Note: If the array is increasing then just print then last element will be the maximum value.

Example:

```
Input:
n = 9
arr[] = {1,15,25,45,42,21,17,12,11}
Output: 45
Explanation: Maximum element is 45.
```

## 13. Minimum Swaps

You are given an unordered array consisting of consecutive integers [1, 2, 3, ..., n] without any duplicates. You are allowed to swap any two elements. Find the minimum number of swaps required to sort the array in ascending order.

Example:

```
Input:
n = 7
arr[] = {7, 1, 3, 2, 4, 5, 6}
Output: 5

Explaination:
i   arr                         swap (indices)
0   [7, 1, 3, 2, 4, 5, 6]   swap (0,3)
1   [2, 1, 3, 7, 4, 5, 6]   swap (0,1)
2   [1, 2, 3, 7, 4, 5, 6]   swap (3,4)
3   [1, 2, 3, 4, 7, 5, 6]   swap (4,5)
4   [1, 2, 3, 4, 5, 7, 6]   swap (5,6)
5   [1, 2, 3, 4, 5, 6, 7]
```

```
Input:
n = 4
arr[] = {4, 3, 1, 2}
Output: 3
```

## 14. Next permutation

Implement next permutation, which rearranges numbers into the lexicographically next greater permutation of numbers.

if such arrangement is not possible, it must rearrange it as the lowest possible order (ie,sorted in ascending order).

The replacement must be in-place and use only constant extra memory.

Example:-

```
Input:
N=3
arr[] = {1,2,3}
Output:
arr[] = {1,3,2}
```

```
Input:
N=3
arr[] = {1,1,5}
Output:
arr[] = {1,5,1}
```

## 15. First missing positive

Given an unsorted integer array, find the smallest missing positive integer.

Example 1:

```
Input:
N = 3
arr[] = {1,2,0}
Output: 3
```

Example 2:

```
Input:
N = 4
arr[] = {3,4,-1,1}
Output: 2
```

Example 3:

```
Input:
N = 5
arr[] = {7,8,9,11,12}
Output: 1
```
