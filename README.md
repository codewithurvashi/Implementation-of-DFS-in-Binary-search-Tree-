# 🌳 Binary Search Tree (BST) in C++

## 📌 Description

This project implements a **Binary Search Tree (BST)** in C++ with all fundamental operations.
It demonstrates how to build and manipulate a BST using **recursive algorithms**.

The program includes:

* ✅ Insertion
* 🔍 Searching
* 🔽 Find Minimum
* 🔼 Find Maximum
* 🔁 Tree Traversals (Inorder, Preorder, Postorder)

---

## 🧠 Concepts Used

* Binary Search Tree (BST)
* Recursion
* Tree Traversals
* Dynamic Memory Allocation (`new`)
* Pointers

---

## 🌲 What is a BST?

A **Binary Search Tree** is a binary tree where:

* Left subtree contains values **less than** the root
* Right subtree contains values **greater than** the root

---

## ⚙️ Features

* 🌱 Insert elements into BST
* 🔍 Search for a key
* 📉 Find minimum value
* 📈 Find maximum value
* 🔁 Perform:

  * Inorder traversal (sorted output)
  * Preorder traversal
  * Postorder traversal

---

## 🔧 Code Overview

### 1. Node Structure

```cpp id="6x6q7s"
struct Node {
    int data;
    Node* left;
    Node* right;
};
```

---

### 2. Insert Function

```cpp id="g0o6nj"
Node* insert(Node* root, int val)
```

* Inserts elements recursively
* Maintains BST property

---

### 3. Search Function

```cpp id="p7n5zq"
bool search(Node* root, int key)
```

* Returns `true` if element is found
* Uses BST property for efficient search

---

### 4. Find Minimum

```cpp id="1r3t8y"
Node* findMin(Node* root)
```

* Returns leftmost node

---

### 5. Find Maximum

```cpp id="4c9v2k"
Node* findMax(Node* root)
```

* Returns rightmost node

---

### 6. Traversals

#### Inorder (Sorted Output)

```id="7q2xk9"
Left → Root → Right
```

#### Preorder

```id="k8w3mz"
Root → Left → Right
```

#### Postorder

```id="n5y1tr"
Left → Right → Root
```

---

## ▶️ Sample Input

```cpp id="3f9z7a"
int arr[] = {5, 3, 7, 2, 4, 8};
```

---

## ▶️ Sample Output

```id="u2p8kl"
Inorder: 2 3 4 5 7 8
Preorder: 5 3 2 4 7 8
Postorder: 2 4 3 8 7 5
Search 4: Found
Min: 2
Max: 8
```

---

## 🚀 How to Run

### 🔧 Compile

```bash id="6y3z1b"
g++ bst.cpp -o bst
```

### ▶️ Run

```bash id="2k9m4v"
./bst
```

---

## ⚠️ Notes

* Duplicate values are not inserted.
* Inorder traversal of BST always produces **sorted output**.
* All operations are implemented using recursion.

---

## 📚 File Structure

```id="8h2m5c"
bst.cpp     → Source code
README.md   → Documentation
```
