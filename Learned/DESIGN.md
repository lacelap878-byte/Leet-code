# Design notes

Why `Learned` is set up the way it is, so that when it needs a reshuffle we can look back at what happened and decide what to try next.

## Decision (15 Nov 2026)

- File things **by idea, not by problem**.
- **One small file per idea**, all with the same layout: in one line, the idea, syntax, example, used in.
- Ideas sit in **group folders** (patterns, data structures, C++, complexity).
- **One contents page**, `Learned/README.md`, with one table per group. (Changed the same evening: the first version had a `README.md` in every group folder, and five READMEs felt messy.)
- The "can explain" tick lives **only** in those tables, so it is never out of date in two places.
- This replaced a first draft of two long files (`LEARNED.md` as a checklist and `EXPLAINED.md` with every explanation), which would have been hard to search once they grew.

## Claude's reasoning

- LeetCode problems reuse a limited set of ideas: counting, two pointers, sliding window, hash sets and maps, and so on. Contains Duplicate and the fast Two Sum both use the same "have I seen this before?" idea.
- So a new problem should usually **add a line** to an idea file that already exists, not create a new file. The number of files should grow much more slowly than the number of problems.
- Small files are easier to link to, find and read than one long file.

## The bet, and my doubt

- **Claude's bet:** the number of ideas stays much smaller than the number of problems.
- **My doubt:** there are thousands of problems. If most of them bring something new, there will be a huge number of files, and nobody will scroll through tables to find one topic.
- Early on, almost every problem brings something new (3 problems gave 9 ideas). The bet is that this slows down. We are trying it and will fix it together if it does not.

## How we will know it is not working

These numbers are a first guess and can change.

- At each review, compare problems done with idea files. If after 50 problems I am still adding about one new file per problem, the bet is losing.
- The contents page gets too long to scan, or one group's table gets past about 40 rows.
- I cannot find a topic I know I wrote down within a minute.

## What we could try then

1. Give a big group its own contents page again (a `README.md` in its folder), or split it into subfolders, for example `cpp/strings`, `cpp/containers`, `cpp/loops`.
2. Lean on search instead of tables: `t` on GitHub, `Ctrl+P` and `Ctrl+Shift+F` in VS Code.
3. Add a tags line to every file plus one A to Z index.
4. Merge very small ideas into bigger files, such as one `strings.md` for all small string facts.

## Review log

Review about every 25 problems: count problems done and idea files, and note anything that was hard to find.

| Date | Problems done | Idea files | Note |
|---|---|---|---|
| 15 Nov 2026 | 2 solved, 1 in progress | 9 | Set up, then cut to one contents page. |
