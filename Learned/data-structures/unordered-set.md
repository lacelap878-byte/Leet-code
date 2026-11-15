# unordered_set

**In one line:** a bag of values with no repeats that quickly answers "have I seen this before?"

## Syntax

```cpp
unordered_set<int> seen;

seen.insert(5);        // seen = {5}
seen.insert(5);        // still {5}: a set never stores repeats
seen.count(5);         // 1, because 5 is in the set
seen.count(9);         // 0, because 9 is not
```

## Example

Contains Duplicate: go through the numbers once. For each number, if `seen.count(x)` is 1, it is a duplicate, so return `true`. Otherwise `insert` it and carry on. One pass, so $O(n)$.

## Watch out

Name it `seen`, not `set`, because `set` is already the name of another C++ type.

A set only remembers **whether** I have seen something. To remember **how many times**, use an [unordered_map](unordered-map.md).

## Used in

- [217 Contains Duplicate](../../submissions/array-hashing/0217-Contains_Duplicate.cpp)
