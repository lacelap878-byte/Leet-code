# Vector of vectors

**In one line:** a list where every item is itself a list.

## Syntax

```cpp
vector<vector<string>> result;    // empty list of lists

vector<string> group;
group.push_back("eat");
result.push_back(group);          // add a whole list as one item

result.size();                    // how many lists
result[0];                        // the first list
result[0][1];                     // item 1 of the first list
result[0].push_back("tea");       // add to the first list
```

Written out by hand, braces inside braces, one inner pair per list:

```cpp
vector<vector<string>> groups = {{"bat"}, {"nat", "tan"}};
```

## Watch out

`result[0]` is a whole list, not one item. Putting it into a `vector<int>` gives the compile error "no matching member function for call to push_back". Add the items one at a time instead.

## Used in

- [49 Group Anagrams](../../submissions/array-hashing/0049-Group_Anagrams.cpp) (the answer is a list of groups)
- [347 Top K Frequent Elements](../../submissions/array-hashing/0347-Top_K_Frequent_Elements.cpp) (one list of numbers per count)
