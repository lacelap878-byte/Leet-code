# Letters are numbers

**In one line:** every `char` is secretly a number, so `c - 'a'` turns a letter into a box number from 0 to 25.

## The idea

Each letter has a number (its ASCII code):

| letter | a  | b  | c  | ... | n   | p   | t   | z   |
|--------|----|----|----|-----|-----|-----|-----|-----|
| number | 97 | 98 | 99 | ... | 110 | 112 | 116 | 122 |

An array of 26 has boxes 0 to 25, so there is no box 112. Subtracting `'a'` (97) slides every letter down so it fits:

- `'a' - 'a'` = 97 minus 97 = **0**
- `'p' - 'a'` = 112 minus 97 = **15**
- `'z' - 'a'` = 122 minus 97 = **25**

The array never stores the letter itself. **The box number is the label**: `t` always works out to 19, so its count always lands in box 19. Each letter picks its own box, wherever it is in the word.

## Syntax

```cpp
count[c - 'a']++;   // find this letter's box and add 1
```

Subtracting two `char`s gives an `int`. You cannot subtract whole words; a loop takes the word apart into letters first.

Another option: `int count[128]{}` and `count[c]++` with no subtraction. A bigger array, same idea.

## Used in

- [242 Valid Anagram](../../submissions/array-hashing/0242-Valid_Anagram.cpp) (seen, not used yet)
