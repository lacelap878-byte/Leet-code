# Sorting and comparing

**In one line:** sort both, then check they are equal.

## The idea

Sorting puts the letters in order, so anagrams become the same word:

- "cat" sorted is "act", and "act" sorted is "act": same, so anagram.
- "pan" sorted is "anp": different from "act".

## Syntax

```cpp
sort(s.begin(), s.end());   // needs <algorithm>; LeetCode includes it
```

## Cost

Sorting is $O(n \log n)$, a bit slower than [counting](counting.md) ($O(n)$), but simple and correct.

## Used in

- [242 Valid Anagram](../../submissions/array-hashing/0242-Valid_Anagram.cpp) (seen, not used)
