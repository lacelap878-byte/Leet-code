# Loops in a row vs nested

**In one line:** loops one after another add up; a loop inside a loop multiplies.

## In a row

```cpp
for (char c : s) { ... }   // n steps
for (char c : t) { ... }   // then n more
```

$n + n = 2n$, which is still $O(n)$.

## Nested

```cpp
for (...) {        // n times
    for (...) {    // n times for EACH outer step
    }
}
```

$n \times n$, which is $O(n^2)$.

## Why it matters

A loop only needs to sit inside another when it has to look at something **again for every step** of the outer loop. If a list or set can remember what the first loop saw, the second loop can go after it instead of inside it.

## Used in

- [1 Two Sum](../../submissions/array-hashing/0001-Two_Sum.cpp) (nested)
- [217 Contains Duplicate](../../submissions/array-hashing/0217-Contains_Duplicate.cpp) (first attempt nested, second attempt one loop)
- [242 Valid Anagram](../../submissions/array-hashing/0242-Valid_Anagram.cpp) (in a row)
