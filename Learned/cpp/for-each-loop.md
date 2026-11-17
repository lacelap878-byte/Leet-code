# For each loop

**In one line:** walks through one string, vector or array, one item at a time.

## Syntax

```cpp
for (char c : s) {
    // c is each letter of s, one at a time
}
```

Read it as "for each `char c` in `s`". `auto` also works: `for (auto c : s)`.

## How many times it runs

Once per item. `"eat"` has 3 letters, so 3 times. An empty string or empty list: 0 times.

## It gives me a copy

```cpp
for (int x : nums) x = 0;              // changes the copy, nums stays the same
for (int i = 0; i < nums.size(); i++)
    nums[i] = 0;                       // changes the real nums
```

To change the real thing, use an index.

## Watch out

It walks **one** thing at a time. To look at box `i` of two arrays together, use a normal index loop:

```cpp
for (int i = 0; i < 26; i++) {
    // countS[i] and countT[i]
}
```

## Used in

- [242 Valid Anagram](../../submissions/array-hashing/0242-Valid_Anagram.cpp)
- [347 Top K Frequent Elements](../../submissions/array-hashing/0347-Top_K_Frequent_Elements.cpp) (going through a map)
