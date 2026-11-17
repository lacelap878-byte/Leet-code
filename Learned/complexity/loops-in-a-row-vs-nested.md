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

## Nested does not always multiply

"Nested multiplies" only holds when the inner loop is the same length every time. The real rule: **add up how many times the inner loop runs**, across all the outer steps.

```cpp
for (int i = nums.size(); i >= 1; i--) {   // every index
    for (int v : shelves[i]) {             // only the numbers at index i
```

Each number sits at exactly one index, so all the inner runs together add up to at most $n$. Worst case, every number different: index 1 holds all $n$ and every other index is empty. That is $n$ outer steps plus $n$ inner runs, $2n$, so $O(n)$.

## Different sizes get different letters

In 49 there are three nested loops, but over different things: words ($n$), words again ($n$), letters in one word ($k$). So it is $O(n^2 \cdot k)$, not $O(n^3)$.

## Why it matters

A loop only needs to sit inside another when it has to look at something **again for every step** of the outer loop. If a list or set can remember what the first loop saw, the second loop can go after it instead of inside it.

## Used in

- [1 Two Sum](../../submissions/array-hashing/0001-Two_Sum.cpp) (nested)
- [217 Contains Duplicate](../../submissions/array-hashing/0217-Contains_Duplicate.cpp) (first attempt nested, second attempt one loop)
- [242 Valid Anagram](../../submissions/array-hashing/0242-Valid_Anagram.cpp) (in a row)
- [49 Group Anagrams](../../submissions/array-hashing/0049-Group_Anagrams.cpp) (nested, $O(n^2 \cdot k)$)
- [347 Top K Frequent Elements](../../submissions/array-hashing/0347-Top_K_Frequent_Elements.cpp) (nested, but $O(n)$)
