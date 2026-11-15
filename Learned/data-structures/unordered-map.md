# unordered_map

**In one line:** my paper list in code: each key is paired with a number.

## Syntax

```cpp
unordered_map<char, int> count;   // empty list: letter → number

count['l']++;          // l:1
count['l']++;          // l:2
count['a']++;          // l:2  a:1
count['l'];            // gives 2
```

- `count['l']` finds the number paired with `'l'`.
- If `'l'` is not in the list yet, the map adds it with 0 first. That is why `++` works the first time.
- Two maps can be compared with `==`: true when they have the same keys with the same numbers.

## Compared with a set

An [unordered_set](unordered-set.md) only remembers **whether** I have seen something. A map also remembers **how many times**.

## Used in

- [242 Valid Anagram](../../submissions/array-hashing/0242-Valid_Anagram.cpp) (seen, not used yet)
