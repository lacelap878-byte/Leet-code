# Initialising arrays

**In one line:** an array made inside a function starts with junk; `{}` sets every box to 0.

## The rule

```cpp
int a[26];      // inside a function: the boxes hold leftover junk
int b[26]{};    // every box is 0
```

Run once with g++ in C++23 mode, the first five boxes were:

```
a: 0 0 -699035644 21965 -699027392
b: 0 0 0 0 0
```

- Reading `a` before setting it is undefined behaviour. It can look like 0 by luck on one run and be junk on the next.
- The `{}` goes before the semicolon: `int b[26]{};`
- Still true in C++23. C++26 makes reading the junk officially an error, but still does not zero the array for you.

## Exception

An array declared **outside** every function (a global) starts at 0 automatically.

## Watch out

A counter must start at 0. Without `{}`, counting adds on top of junk, so the counts come out wrong.

## Used in

- [242 Valid Anagram](../../submissions/array-hashing/0242-Valid_Anagram.cpp) (my first attempt forgot the `{}`)
