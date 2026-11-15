# For each loop

**In one line:** walks through one string, vector or array, one item at a time.

## Syntax

```cpp
for (char c : s) {
    // c is each letter of s, one at a time
}
```

Read it as "for each `char c` in `s`". `auto` also works: `for (auto c : s)`.

## Watch out

It walks **one** thing at a time. To look at box `i` of two arrays together, use a normal index loop:

```cpp
for (int i = 0; i < 26; i++) {
    // countS[i] and countT[i]
}
```

## Used in

- [242 Valid Anagram](../../submissions/array-hashing/0242-Valid_Anagram.cpp)
