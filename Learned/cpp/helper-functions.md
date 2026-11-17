# Helper functions

**In one line:** I can write my own function inside the `Solution` class and call it.

```cpp
class Solution {
public:
    bool isAnagram(string s, string t) { ... }    // my own function

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        ...
        if (isAnagram(strs[i], strs[j])) ...     // call it
    }
};
```

- Each LeetCode problem starts from scratch. A function from another problem only exists here once I paste it in.
- Reusing my own code is fine, as long as I can explain every line of it.

## Used in

- [49 Group Anagrams](../../submissions/array-hashing/0049-Group_Anagrams.cpp) (reused my `isAnagram` from 242)
