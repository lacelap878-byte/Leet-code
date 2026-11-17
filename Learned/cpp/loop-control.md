# Loop control

**In one line:** how a loop stops, how to skip a round, and how often each line runs.

## How a for loop stops

```cpp
for (int i = 0; i < strs.size(); i++)
```

It runs while the condition is true. With 6 words, `i` goes 0 to 5. At 6, `6 < 6` is false, so it stops. The condition is checked again every round, so `.size()` always gives the size right now.

Counting down: `for (int i = nums.size(); i >= 1; i--)`

## Skip a round

`continue;` skips the rest of this round and goes to the next one.

## Stop early

`return result;` inside a loop leaves the whole function at once.

## Where a line sits decides how often it runs

```cpp
for (int i ...) {
    // runs once per i
    for (int j ...) {
        // runs once per j, for every i
    }
    // runs once per i, after all the j's
}
```

In 49, making the group inside the `j` loop threw it away and made a new one for every `j`. It had to be made before the `j` loop and added to the result after it.

## Nested or one after the other?

Ask: does the second loop need what the first loop is holding right now? Yes: put it inside. No: put it after.

- 242: counting `t` doesn't need any letter of `s`, so the loops go one after the other.
- 49: checking word `j` needs word `i`, so the `j` loop goes inside the `i` loop.

## Used in

- [49 Group Anagrams](../../submissions/array-hashing/0049-Group_Anagrams.cpp)
- [347 Top K Frequent Elements](../../submissions/array-hashing/0347-Top_K_Frequent_Elements.cpp)
