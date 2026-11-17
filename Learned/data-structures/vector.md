# Vector

**In one line:** a list that knows its own size and can grow.

## Vector vs array

| | Array | vector |
|---|---|---|
| Made like | `int a[26]{};` | `vector<int> v;` |
| Knows its size? | No, I keep track | Yes: `v.size()` |
| Can grow? | No | Yes: `v.push_back(x)` |
| Pick one box | `a[0]` | `v[0]` |

`.size()` gives how many items, on a vector or on a string:

```cpp
vector<string> strs = {"eat", "tea", "tan"};
strs.size();      // 3 words
strs[0].size();   // 3 letters in "eat"
```

A loop with `i < strs.size()` goes through the words, not the letters.

## Vector with a set size

```cpp
vector<bool> placed(strs.size(), false);
```

| Part | Means |
|---|---|
| `vector<bool>` | a list of true/false boxes |
| `placed` | its name |
| `strs.size()` | how many boxes |
| `false` | what every box starts as |

The values in the brackets go to the vector's constructor, its setup when it is made. Same idea as `int Slist[26]{};`: a set size, every box starting at a value I chose.

A new list doesn't know it is meant to line up with another list, so I tell it the size. Writing `6` would only work for one test. `strs.size()` works for every test.

The same list, using only `push_back`:

```cpp
vector<bool> placed;
for (int i = 0; i < strs.size(); i++) {
    placed.push_back(false);
}
```

With only a size, each box starts empty: `vector<vector<int>> shelves(nums.size() + 1);` is `nums.size() + 1` empty lists.

## Used in

- [49 Group Anagrams](../../submissions/array-hashing/0049-Group_Anagrams.cpp) (`placed`)
- [347 Top K Frequent Elements](../../submissions/array-hashing/0347-Top_K_Frequent_Elements.cpp) (`shelves`)
