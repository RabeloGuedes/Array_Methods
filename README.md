# Arrays

## 📌 Goals

- Try to understand the concept of arrays in C.
- Learn how to use arrays.
- Learn how to manipulate arrays.
- Understand how high-level programming languages work at and below the surface (an array is a low-level concept).
- Reproduce the behavior of some functions from high-level programming languages, such as JavaScript.

## 🛠️ Methods

- push (add an element to the end of the array)
- pop (remove the last element of the array)

## Under the hood

- The array is a contiguous block of memory.
- The array is a pointer to the first element of the array.
- All elements of the array are of the same type.

 > Given the information we can speculate how high-level programming languages work at and below the surface.
  > Disclaimer: This is an example of how the methods could be implemented, it is not the actual implementations of this methods of any high-level programming language.

 1. The push method is implemented by allocating a new block of memory with the size of the array plus one element, copying the elements of the old array to the new array and adding the new element to the end of the new array.
 	It uses the realloc function to allocate a new block of memory with the size of the array plus one element.
 	It uses the memcpy function to copy the elements of the old array to the new array.
 	It uses the free function to free the memory of the old array.
 	So the push method abstracts the complexity of the implementation of the array, making it easier to use.
 	It should be noted that the push method is not the most efficient way to add an element to the end of the array, as it has to allocate a new block of memory, copy the elements of the old array to the new array and free the memory of the old array.
 	If the realloc function cannot expand the memory block, it will allocate a new block of memory, copy the elements of the old array to the new array and free the memory of the old array.
	If the realloc function cannot allocate a new block of memory, it will return NULL. So the push method is not the most efficient way to add an element to the end of the array.
	Keep in mind that at a certain point the push method will duplicate the size of the array + 1, causing the program to consume more memory than necessary.
	An alternative to avoid the realloc function to allocate the size of the new array at each call is by allocating a block of memory with the size of the array * 2, and checking if the array capacity is equal to the array length, if it is, then the array capacity is doubled.
	That way the realloc function will only be called when the array capacity is equal to the array length.
	Avoiding the realloc function to allocate the size of the new array at each call will make the program more efficient.
	It's practical, however you should distinguish when to use an array because of this characteristic.
	Arrays are one kind of data structures, there are plenty of other data structures that can be used to store data, such as linked lists, stacks, queues, hashmaps, trees, graphs, etc. Each data structure has its own characteristics, advantages and disadvantages.
	So it is important to know the data structures and when to use them.
 	It's also worth mentioning, although it is unlikely to happen, but depending on the machine's resources and the size of the array, the realloc function may not be able to allocate a new block of memory with the size of the array plus one element, causing the program to crash.
	Even though you have a lot of resources a huge array being pushed another element may cause performance issues.

 2. The pop method is implemented by allocating a new block of memory with the size of the array minus one element, copying the elements of the old array to the new array and freeing the memory of the old array.
 	It uses the realloc function to allocate a new block of memory with the size of the array minus one element.
 	It uses the memcpy function to copy the elements of the old array to the new array.
 	It uses the free function to free the memory of the old array.
 	So the pop method abstracts the complexity of the implementation of the array, making it easier to use.
 	It should be noted that the pop method is not the most efficient way to remove the last element of the array, as it has to allocate a new block of memory, copy the elements of the old array to the new array and free the memory of the old array.
	If the realloc function cannot expand the memory block, it will allocate a new block of memory, copy the elements of the old array to the new array and free the memory of the old array.
	If the realloc function cannot allocate a new block of memory, it will return NULL.
	In the case of the pop method, the realloc function will always be able to allocate a new block of memory with the size of the array minus one element, because the size of the array minus one element is always less than the size of the array.
	There are some implementations to avoid the realloc, such as updating the array length and returning the last element of the array.
	However, this implementation does not truly remove the last element of the array, it just returns the last element of the array and updates the array length.
	Masking the real size of the array, but the array still has the same size and the poped element is still reachable in the array.
	So the pop method is not the most efficient way to remove the last element of the array.
	Keep in mind that at a certain point the pop method will duplicate the size of the array - 1, causing the program to consume more memory than necessary.
	It's practical, however you should distinguish when to use it and when not to use it.
	As mentioned above, arrays are one kind of data structures, there are plenty of other data structures that can be used to store data, such as linked lists, stacks, queues, hashmaps, trees, graphs, etc.
	Each data structure has its own characteristics, advantages and disadvantages. So it is important to know the data structures and when to use them.

## ‍💻 Required Softwares

- C compiler (clang)
- GNU make

## ⬇️ Compiling files

```bash
	make #Compile the executable 'arrays'.
	make all #Do exactly what the above command does.
	make arrays #Do exactly what the above command does.
```

## ⚡ Testing the project

```
	Tests in progress...
	PS: This project was developed to run on Linux and Mac operating systems.
```

## Squad

> Single person project:

<table>
    <tr>
      <td>
        <img align="center" height="150px" width="150px" src="https://avatars.githubusercontent.com/u/67388710?v=4"/>
        <h4 align="center">Alê Rabelo</h4>
      </td>
    </tr>
  </table>

## 💬 Contact

<div align="center" style="display: inline_block">
  <a href="https://www.linkedin.com/in/al%C3%AA-emmanuel-rabelo-guedes/" target="_blank">
    <img height="28rem" src="https://img.shields.io/badge/LinkedIn-0077B5?style=for-the-badge&logo=linkedin&logoColor=white">
  </a> 
   <a href="mailto:rabeloguedes@proton.me">
     <img src="https://img.shields.io/badge/ProtonMail-8B89CC?style=for-the-badge&logo=protonmail&logoColor=white" target="_blank">
  </a>
</div>

</details>
