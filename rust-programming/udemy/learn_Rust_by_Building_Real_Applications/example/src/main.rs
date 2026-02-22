mod difference_stack_heap;
mod the_stack;

fn main() {
    println!("Hello, world!");
    let a: i32 = 2;
    the_stack::stack_only(a);
    difference_stack_heap::f();
}
