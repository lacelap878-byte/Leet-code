# auto

**In one line:** `auto` lets C++ work out the type for me.

In a for each loop, `auto` becomes the type of **one item of what is after the colon**:

| Loop | One item is | auto becomes |
|---|---|---|
| `for (auto v : nums)` | a number | `int` |
| `for (auto p : count)` | a row of the map | `pair<const int, int>` |

Writing the type out does exactly the same thing:

```cpp
for (pair<const int, int> p : count)
```

The `const` means the key is locked: I can change a row's value, not its key.

My rule: only use `auto` when I can say what it stands for.

## Used in

- [347 Top K Frequent Elements](../../submissions/array-hashing/0347-Top_K_Frequent_Elements.cpp)
