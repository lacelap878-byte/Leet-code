# Grouping with a tick list

**In one line:** take the first word not yet in a group, start a group with it, add every later match, and tick each word you place.

## The idea

For each word, in order:

1. Already ticked? Skip it.
2. Start a new group with it.
3. Check every **later** word. If it matches, add it to the group and tick it.
4. Put the group into the result.

Without the ticks, a word that is already in a group starts a second group of its own:

```
without ticks: [eat,tea,ate] [tea,ate] [tan,nat] [ate] [nat] [bat]
with ticks:    [eat,tea,ate] [tan,nat] [bat]
```

## Syntax

```cpp
vector<bool> placed(strs.size(), false);   // one tick per word, all unticked
...
if (placed[i]) continue;                   // already in a group: skip it
...
placed[j] = true;                          // tick word j
```

See [vector with a set size](../data-structures/vector.md#vector-with-a-set-size) and [loop control](../cpp/loop-control.md).

## Cost

Every word is checked against every later word, and each check reads the letters: $O(n^2 \cdot k)$, where $k$ is the length of a word. The answers are right, but it is too slow for LeetCode's biggest tests ([TLE](../complexity/tle.md)).

The fast version gives each word a label that all its anagrams share, and uses a map from label to group, so each word is read once. Still to do.

## Used in

- [49 Group Anagrams](../../submissions/array-hashing/0049-Group_Anagrams.cpp) (slow version, TLE)
