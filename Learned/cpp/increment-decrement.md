# Increment and decrement

**In one line:** `x++` adds 1 to x, `x--` takes 1 away.

## Syntax

It works on one box of an array too:

```cpp
int count[26]{};   // 26 boxes, all 0 (the {} sets them to 0)
count[2]++;        // box 2 is now 1
count[2]++;        // box 2 is now 2
count[2]--;        // box 2 is back to 1
```

`count[2]++` is short for `count[2] = count[2] + 1`.

## Why it matters

Adding 1 is how you count. Each `++` is a tally mark in that box. See [counting](../patterns/counting.md).

## Used in

- [242 Valid Anagram](../../submissions/array-hashing/0242-Valid_Anagram.cpp)
