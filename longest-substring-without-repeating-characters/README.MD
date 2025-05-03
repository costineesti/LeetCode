# LeetCode 3. [Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/description/)

**Difficulty**: Medium

---

## Problem

Given a string `s`, find the length of the longest substring without duplicate characters.

---

## Examples

### Example 1

**Input**:  
`s = "abcabcbb"`  
**Output**:  
`3`  
**Explanation**:  
The answer is `"abc"`, with the length of 3.

---

### Example 2

**Input**:  
`s = "bbbbb"`  
**Output**:  
`1`  
**Explanation**:  
The answer is `"b"`.

---

### Example 3

**Input**:  
`s = "pwwkew"`  
**Output**:  
`3`  
**Explanation**:  
The answer is `"wke"`, with the length of 3.  
Note that `"pwke"` is a **subsequence**, not a **substring**.

---

## Constraints

- `0 <= s.length <= 5 * 10⁴`
- `s` consists of English letters, digits, symbols, and spaces.