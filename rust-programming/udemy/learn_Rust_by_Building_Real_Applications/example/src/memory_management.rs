pub fn stack_only(b: i32) {
    let c: i32 = 3;
    println!("b = {}, c = {}", b, c)
}

pub fn stack_and_heap() {
    let d: i32 = 5; // stack
    let e = Box::new(7); // heap
                         // Box::new(7) allocates an i32 on the heap
                         // e is a pointer stored on the stack
                         // To access the value, we dereference with e*
                         // println! is able to display Box<T> if T: Display
    println!("d = {}, e = {}", d, e);
    drop(e); // Desallocation memoire de e
}

pub fn stack_and_heap_smart_pointers() {
    let d: i32 = 5; // stack
    let e = Box::new(7); // heap
                         // Box is a smart pointer that stores a value on the heap
                         // Box is a single owner, the simplest and most common
                         // Box::new(7) allocates an i32 on the heap
                         // e is a pointer stored on the stack
                         // To access the value, we dereference with e*
                         // println! is able to display Box<T> if T: Display
    println!("d = {}, e = {}", d, e);
}
