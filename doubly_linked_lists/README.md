<h1 align="center"> Doubly linked lists </h1>

A linked list is a linear data structure consisting of nodes where each node is divided into two parts, data, and address. Every node in a linked list is linked together. 

A Doubly linked list is complex compared to a singly linked list. Each node is divided into three parts to store data and the addresses of the previous and next nodes. In a doubly linked list, the first node prev and last node next pointers point to the null, indicating no nodes before or after it.

It is easy to access elements in the doubly linked list since it consists of two pointers to traversal from forward and backward directions.

<div align="center">
<br>
<img src="https://www.simplilearn.com/ice9/free_resources_article_thumb/Doubly_Linked_List_in_C_1.png" alt="double-linked-list" /> 
</div>
<br>
Let's consider three elements to insert into the list. Each node consists of the data and addresses parts of the prev and next nodes. That is stored at random addresses.

The address of the first node is stored in the special node called the head node. 

The first node's prev pointer is pointing to null, indicating no nodes before it, and the last node's next pointer is pointing to the null, which shows no nodes after it.
