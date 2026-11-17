# Count as index

**In one line:** use each count as an index, so the numbers come out in order of count without sorting. Usually called bucket sort.

## The idea

After counting, `count` goes number → how many times. Flip it: make a list where the **index is the count** and the **value is the numbers** with that count.

`nums = [4, 7, 4, 2, 7, 4, 9, 2, 4, 7]`

```
count:    9 → 1      4 → 4      2 → 2      7 → 3
flipped:  [1] → {9}  [2] → {2}  [3] → {7}  [4] → {4}   (every other index empty)
```

Then read from the highest index down. The biggest counts come out first: 4, then 7, then 2, then 9.

- The rows of `count` arrive in no order. Each number still lands at the index of its count, so the end result is the same.
- Nothing is compared or sorted. The order comes from the indexes, which are already 0, 1, 2, ...
- One index can hold several numbers, because two numbers can share a count. That is why each index holds a list.

## Syntax

```cpp
vector<vector<int>> shelves(nums.size() + 1);
for (auto p : count) {
    shelves[p.second].push_back(p.first);   // count is the index, number is the value
}

for (int i = nums.size(); i >= 1; i--) {    // highest index down
    for (int v : shelves[i]) {              // every number at index i
        // take v
    }
}
```

## Why the + 1

Indexes start at 0. The biggest possible count is `nums.size()`, when every number is the same, so the indexes must reach `nums.size()`. That takes `nums.size() + 1` of them. Index 0 stays empty.

## When it works

Only when the counts have a small range known in advance. Here that range is 1 to `nums.size()`, so the counts can be indexes.

## Cost

Count once, flip once, read the indexes once: $O(n)$. Sorting would be $O(n \log n)$.

## Used in

- [347 Top K Frequent Elements](../../submissions/array-hashing/0347-Top_K_Frequent_Elements.cpp)
