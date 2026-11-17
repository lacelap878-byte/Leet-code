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

## Keys and values

Each row is a pair: the **key** (x) and the **value** (y). Whatever goes inside `[ ]` is always the key.

```cpp
unordered_map<int, int> count;   // key: a number, value: how many times
for (int v : nums) {
    count[v]++;
}
```

`[4, -2, 4]` gives the rows `(4, 2)` and `(-2, 1)`. Key first.

- Unlike an array, the keys can be any number, negatives included. No `- 'a'` step is needed.
- "Unordered" means the rows are kept in no particular order. That is fine, because I find a row by its key, never by its position.

## Going through every row

```cpp
for (auto p : count) {
    p.first;    // the key: the number
    p.second;   // the value: how many times
}
```

The loop gives me each row once, in no particular order. See [auto](../cpp/auto.md).

## Compared with a set

An [unordered_set](unordered-set.md) only remembers **whether** I have seen something. A map also remembers **how many times**.

## Used in

- [242 Valid Anagram](../../submissions/array-hashing/0242-Valid_Anagram.cpp) (seen, not used yet)
- [347 Top K Frequent Elements](../../submissions/array-hashing/0347-Top_K_Frequent_Elements.cpp) (counting numbers)
