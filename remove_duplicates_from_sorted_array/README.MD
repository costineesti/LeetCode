# 26. [Remove Duplicates from Sorted Array](https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/)

**Difficulty**: Easy

---

## Problem

Given an integer array `nums` sorted in **non-decreasing order**, remove the duplicates **in-place** such that each unique element appears only once. The relative order of the elements should be kept the same.

Then return the number of unique elements in `nums`.

---

## Requirements

- Modify the array `nums` in-place such that the **first `k` elements** of `nums` contain the **unique** elements in the original order.
- The remaining elements beyond `k` do not matter.
- Return `k`, the count of unique elements.

The judge will test your solution using:

```java
int[] nums = [...]; // Input array
int[] expectedNums = [...]; // Expected unique elements

int k = removeDuplicates(nums); // Your implementation

assert k == expectedNums.length;
for (int i = 0; i < k; i++) {
    assert nums[i] == expectedNums[i];
}
```