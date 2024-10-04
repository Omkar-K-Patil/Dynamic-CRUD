# Dynamic-CRUD
C++ DSA Project with Templates, Linked Lists, File Handling, Searching, and Sorting

This project implements key data structures and algorithms using C++, focusing on the usage of templates, linked lists, file handling for data persistence, and fundamental searching and sorting techniques.

Features:
Templated Data Structures:

The project utilizes templates to make data structures generic and reusable. This enables the creation of linked lists and other data structures that can handle various data types (e.g., integers, strings, floating-point numbers).
Linked List Implementation:

A singly linked list is implemented as the core data structure. It supports various operations such as:
Insertion (at the beginning, end, or specific position).
Deletion (by value or by position).
Traversal to print or access the elements.
Searching and sorting algorithms that work on the linked list.
File Handling:

The system uses file handling to store and retrieve data from files, ensuring that data persists even after the program terminates.
Supports operations such as:
Saving the linked list to a file.
Loading data from a file to reconstruct the linked list on program startup.
Managing files in text format (e.g., .txt) for easy readability.
Searching Algorithms:

Linear Search: Searches for an element in the linked list sequentially.
Binary Search: Implemented on a sorted linked list. This algorithm efficiently finds elements in O(log n) time by dividing the search space in half.
Sorting Algorithms:

The project implements classic sorting algorithms such as:
Bubble Sort: A simple comparison-based algorithm that swaps adjacent elements.
Selection Sort: Finds the smallest element and swaps it to the beginning in each iteration.
Merge Sort: A divide-and-conquer algorithm that recursively splits the list and merges sorted parts.
These sorting techniques are applied to the linked list, and the sorted list is either displayed or saved to a file.
Menu-Driven Program:

The project features an interactive menu-driven interface where users can choose various operations, including:
Adding and removing elements from the linked list.
Searching for specific elements.
Sorting the list and displaying the result.
Saving or loading data from files.
Key Objectives:
Reusability: With the use of templates, the data structures and algorithms are flexible and can handle multiple data types.
Data Persistence: By using file handling, the project ensures that data entered by users can be saved and reloaded for future sessions.
Efficiency: Through sorting and searching algorithms, the project optimizes the performance of operations like searching and ordering data.
This project demonstrates proficiency in object-oriented programming, efficient data management using file handling, and the implementation of fundamental algorithms in C++.
