# Searching

## Linear search

- Data tidak harus terurut
- Kompleksitas O(n)

## Binary search

- Data harus terurut
- Kompleksitas O(log2(n))

## Perbandingan

**Kasus 1: data tidak terurut, 1000 data**

| Algoritma            | Kompleksitas           | Result |
| -------------------- | ---------------------- | ------ |
| Linear Search        | O(n)                   | 1000   |
| Sort + Binary Search | O(n log2(n) + log2(n)) | 9975   |

**Kasus 2: data tidak terurut, 1000 data, 10x searching**

| Algoritma                  | Kompleksitas                 | Result |
| -------------------------- | ---------------------------- | ------ |
| Linear Search \* 10        | O(n \* 10)                   | 10000  |
| Sort + Binary Search \* 10 | O(n log2(n) + log2(n) \* 10) | 10065  |

**Kasus 3: data tidak terurut, 1000 data, 100x searching**

| Algoritma                   | Kompleksitas                  | Result |
| --------------------------- | ----------------------------- | ------ |
| Linear Search \* 100        | O(n \* 100)                   | 100000 |
| Sort + Binary Search \* 100 | O(n log2(n) + log2(n) \* 100) | 10965  |


# Materi UAS

- sorting
- searching
- file
- recursive/function
