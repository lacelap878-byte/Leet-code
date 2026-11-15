# Checking each pair once

**In one line:** to look at every pair of items, start the inner loop one place after the outer loop.

## The idea

Starting the inner loop at 0 would:

- pair a number with itself (`i == j`), and
- check every pair twice: (0, 1) and later (1, 0).

Starting at `i + 1` checks each pair exactly once.

## Syntax

```cpp
for (int i = 0; i < nums.size(); i++) {
    for (int j = i + 1; j < nums.size(); j++) {
        // look at the pair nums[i], nums[j]
    }
}
```

## Example

With 4 numbers the pairs are (0,1) (0,2) (0,3) (1,2) (1,3) (2,3): 6 pairs, each once.

It is still a loop inside a loop, so still $O(n^2)$. See [loops in a row vs nested](../complexity/loops-in-a-row-vs-nested.md).

## Used in

- [1 Two Sum](../../submissions/array-hashing/0001-Two_Sum.cpp)
- [217 Contains Duplicate](../../submissions/array-hashing/0217-Contains_Duplicate.cpp) (first attempt)
