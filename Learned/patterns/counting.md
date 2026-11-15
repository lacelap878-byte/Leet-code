# Counting

**In one line:** count how many times each thing appears, then compare the counts.

## The idea

Two words are anagrams when **every letter appears the same number of times in both**. On paper, write a list for each word and compare letter by letter:

```
       listen  silent
l:        1      1   same
i:        1      1   same
s:        1      1   same
t:        1      1   same
e:        1      1   same
n:        1      1   same   all match: anagram
```

```
         aab   abb
a:        2     1    different: not an anagram, stop here
b:        1     2
```

- Comparing **totals** is not enough: "aab" and "abb" both total 3.
- Check the lengths first. If they differ, the answer is `false`. Equal lengths also mean the second word cannot sneak in a letter the first word does not have.

## Two lists

Read each word **once** and count it into its own list. Then compare the lists letter by letter.

The other way, going back into the second word to count each letter separately, rereads that word once per letter. The two lists give the same answer with less rereading.

Building a list (with a [map](../data-structures/unordered-map.md)):

```cpp
for (char c : s) {
    countS[c]++;
}
```

Or with an array of 26 boxes (see [letters are numbers](../cpp/letters-are-numbers.md)): `countS[c - 'a']++;`

Each word is read once, so $O(n)$.

## One list

Keep one list. Add 1 for each letter of the first word, then take 1 away for each letter of the second:

```
start from "aab":   a:2  b:1
read "abb":
  a   →             a:1  b:1
  b   →             a:1  b:0
  b   →             a:1  b:-1
```

Not every box is 0, so not an anagram. With "listen" and "silent" every box ends at 0.

Why it works: `countS[i] == countT[i]` is the same as `countS[i] - countT[i] == 0`. So subtract as you go, then check for zeros.

Declare the list **once, above both loops**, so both loops change the same list.

## Used in

- [242 Valid Anagram](../../submissions/array-hashing/0242-Valid_Anagram.cpp)
