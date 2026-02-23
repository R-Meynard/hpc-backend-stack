mod difference_stack_heap;
mod memory_management;

fn main() {
    println!("Hello, world!");
    let a: i32 = 2;
    let result = memory_management::stack_only_improved(a);
    dbg!(result);
    /*memory_management::stack_only(a);
    difference_stack_heap::f();
    memory_management::stack_and_heap();
    memory_management::stack_and_heap_smart_pointers();*/
}
