# Braces and square brackets

**In one line:** `{ }` writes out a list; `[ ]` picks one box from it.

```cpp
vector<string> strs = {"eat", "tea", "tan"};   // write the list
strs[0];                                       // pick box 0: "eat"
strs[0][1];                                    // box 1 of "eat": 'a'
```

LeetCode shows lists with square brackets, `["eat","tea"]`. That is only how it displays them. In C++ the same list is written with braces.

On LeetCode I never type the input. It is already in the parameter when my function starts.

## Used in

- [49 Group Anagrams](../../submissions/array-hashing/0049-Group_Anagrams.cpp)
