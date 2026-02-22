pub fn stack_only(b: i32) {
    let c: i32 = 3;
    println!("b = {}, c = {}", b, c)
}

pub fn stack_and_heap() {
    let d: i32 = 5; // stack
    let e = Box::new(7); // heap
                         // Box::new(7) alloue un i32 sur le heap
                         // e est un pointeur stocke sur le stack
                         // Pour acceder a la valeur, on dereference avec *e
                         // println! sait afficher Box<T> si T: Display
    println!("d = {}, e = {}", d, e);
    drop(e); // Desallocation memoire de e
}
