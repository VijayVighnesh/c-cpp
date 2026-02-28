# Data Structures and Algorithms (DSA) Basics

## What is DSA?

**Data Structures** - Ways to organize and store data efficiently
**Algorithms** - Step-by-step procedures to solve problems

## Core Data Structures

### 1. Arrays
- Fixed-size collection of elements
- Fast access by index: O(1)
- Insertion/deletion: O(n)

### 2. Linked Lists
- Nodes connected by pointers
- Dynamic size
- Insertion/deletion: O(1) at known position
- Access: O(n)

### 3. Stacks
- LIFO (Last In First Out)
- Operations: push, pop, peek
- Use cases: function calls, undo operations

### 4. Queues
- FIFO (First In First Out)
- Operations: enqueue, dequeue
- Use cases: task scheduling, BFS

### 5. Trees
- Hierarchical structure
- Binary Tree: each node has max 2 children
- Binary Search Tree: left < parent < right
- Use cases: file systems, databases

### 6. Graphs
- Nodes (vertices) connected by edges
- Types: directed, undirected, weighted
- Use cases: social networks, maps

### 7. Hash Tables
- Key-value pairs
- Average O(1) for insert, delete, search
- Use cases: caching, databases

## Algorithm Categories

### Sorting
- Bubble Sort: O(n²)
- Merge Sort: O(n log n)
- Quick Sort: O(n log n) average

### Searching
- Linear Search: O(n)
- Binary Search: O(log n) - requires sorted data

### Recursion
- Function calls itself
- Base case + recursive case
- Examples: factorial, Fibonacci

### Dynamic Programming
- Break problem into subproblems
- Store results to avoid recomputation
- Examples: knapsack, longest common subsequence

### Greedy Algorithms
- Make locally optimal choice at each step
- Examples: Dijkstra's, Huffman coding

## Time Complexity (Big O)

- O(1) - Constant
- O(log n) - Logarithmic
- O(n) - Linear
- O(n log n) - Linearithmic
- O(n²) - Quadratic
- O(2ⁿ) - Exponential

## Space Complexity

Memory used by algorithm relative to input size

## Why Learn DSA?

- Write efficient code
- Solve complex problems
- Pass technical interviews
- Understand trade-offs between time and space
