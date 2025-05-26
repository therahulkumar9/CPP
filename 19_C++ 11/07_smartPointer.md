# Smart Pointers in C++

Smart pointers are a C++ feature designed to help manage dynamic memory allocation and prevent memory leaks. They are wrapper classes around raw pointers that automatically handle the deallocation of the memory when the object goes out of scope.

## Main Types of Smart Pointers

### Unique Pointer (`unique_ptr`)

A unique pointer that does not share ownership and will free the resource at the end of the scope.

### Shared Pointer (`shared_ptr`)

A shared pointer that does share ownership, and will only free the resource when there are no other owners counted and it has reached the end of the scope.

### Weak Pointer (`weak_ptr`)

A weak pointer that is used with a shared pointer, but it does not add to the reference counter like a shared pointer does.

## Benefits of Smart Pointers

- **Automatic memory management**: The memory is automatically freed when the smart pointer goes out of scope, preventing memory leaks.
- **Exception safety**: Smart pointers ensure that memory is freed even if an exception is thrown.
- **Simplified pointer management**: Smart pointers handle the low-level pointer operations, allowing the developer to focus on higher-level logic.
