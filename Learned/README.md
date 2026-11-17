# Learned

Everything I meet for the first time while doing LeetCode, filed **by idea, not by problem**, so I can find it again and explain it.

This page is the only contents page. Each row links to one idea file.
A tick means I can explain the idea out loud without notes.

## Patterns

Ways to solve a problem. Files in `patterns/`.

| Idea | In one line | Can explain | First met |
|---|---|---|---|
| [Checking each pair once](patterns/checking-each-pair-once.md) | Inner loop starts at `i + 1` |  | 1 Two Sum, 14 Nov 2026 |
| [Counting: two lists](patterns/counting.md#two-lists) | Count each word into its own list, compare letter by letter | ✓ | 242 Valid Anagram, 15 Nov 2026 |
| [Counting: one list](patterns/counting.md#one-list) | Add for one word, subtract for the other, check for zeros |  | 242 Valid Anagram, 15 Nov 2026 |
| [Sorting and comparing](patterns/sorting-and-comparing.md) | Sort both, then check they are equal |  | 242 Valid Anagram, 15 Nov 2026 |
| [Grouping with a tick list](patterns/grouping-with-a-tick-list.md) | Start a group with the first unplaced word, add later matches, tick them |  | 49 Group Anagrams, 16 Nov 2026 |
| [Count as index](patterns/count-as-index.md) | Counts become indexes, so numbers come out in order without sorting |  | 347 Top K Frequent Elements, 17 Nov 2026 |

## Data structures

Containers that store things for me. Files in `data-structures/`.

| Idea | In one line | Can explain | First met |
|---|---|---|---|
| [unordered_set](data-structures/unordered-set.md) | Remembers **whether** I have seen a value |  | 217 Contains Duplicate, 14 Nov 2026 |
| [unordered_map](data-structures/unordered-map.md) | Remembers a number for each key, like my paper list |  | 242 Valid Anagram, 15 Nov 2026; used in 347 |
| [Vector vs array](data-structures/vector.md#vector-vs-array) | A vector knows its size and can grow |  | 49 Group Anagrams, 16 Nov 2026 |
| [Vector with a set size](data-structures/vector.md#vector-with-a-set-size) | `vector<bool> placed(n, false)`: n boxes, all false |  | 49 Group Anagrams, 16 Nov 2026 |
| [Vector of vectors](data-structures/vector-of-vectors.md) | A list of lists: `result[0][1]` |  | 49 Group Anagrams, 16 Nov 2026 |

## C++

Syntax and language facts. Files in `cpp/`.

| Idea | In one line | Can explain | First met |
|---|---|---|---|
| [For each loop](cpp/for-each-loop.md) | `for (char c : s)` walks one thing, item by item | ✓ | Knew it; refreshed in 242 Valid Anagram, 15 Nov 2026 |
| [Increment and decrement](cpp/increment-decrement.md) | `x++` adds 1, `x--` takes 1 away, also on one array box | ✓ | 242 Valid Anagram, 15 Nov 2026 |
| [Letters are numbers](cpp/letters-are-numbers.md) | `c - 'a'` turns a letter into a box number 0 to 25 |  | 242 Valid Anagram, 15 Nov 2026 |
| [Initialising arrays](cpp/initialising-arrays.md) | An array made inside a function starts with junk; `{}` sets every box to 0 |  | 242 Valid Anagram, 15 Nov 2026 |
| [Braces and square brackets](cpp/braces-and-square-brackets.md) | `{ }` writes a list, `[ ]` picks one box |  | 49 Group Anagrams, 16 Nov 2026 |
| [Loop control](cpp/loop-control.md) | How a loop stops, `continue`, early `return`, where a line sits |  | 49 Group Anagrams, 16 Nov 2026 |
| [Helper functions](cpp/helper-functions.md) | My own function inside `Solution`, then call it |  | 49 Group Anagrams, 16 Nov 2026 |
| [auto](cpp/auto.md) | C++ works out the type: one item of what is after the colon |  | 347 Top K Frequent Elements, 17 Nov 2026 |

## Complexity

How fast or slow code is, and why. Files in `complexity/`.

| Idea | In one line | Can explain | First met |
|---|---|---|---|
| [Loops in a row vs nested](complexity/loops-in-a-row-vs-nested.md) | In a row they add, nested they multiply | ✓ | 242 Valid Anagram, 15 Nov 2026 |
| [Nested does not always multiply](complexity/loops-in-a-row-vs-nested.md#nested-does-not-always-multiply) | Add up how often the inner loop runs |  | 347 Top K Frequent Elements, 17 Nov 2026 |
| [Time Limit Exceeded](complexity/tle.md) | Too slow for a test, not a wrong answer; I count it as wrong |  | 49 Group Anagrams, 16 Nov 2026 |

## How to find something

- Scan the tables above.
- On GitHub, press `t` in the repo and type part of the name. In VS Code, `Ctrl+P`.

## Adding something new

1. **New idea:** make a file in the right folder, named in lowercase words joined by hyphens (like `unordered-set.md`). Copy the layout from any idea file. Add a row to the right table above, unticked.
2. **Idea I already have:** add the problem to the "Used in" list at the bottom of its file.
3. **No group fits:** make a new folder and add a new section with a table above.
4. Optional: put `// Concepts: counting, unordered-map` at the top of the solution file, so I can jump from the code to the explanation.

Why it is set up this way, and when to review it: [DESIGN.md](DESIGN.md).
