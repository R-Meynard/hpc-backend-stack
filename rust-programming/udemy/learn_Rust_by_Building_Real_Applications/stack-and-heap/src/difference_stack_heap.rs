pub fn f() {
    let _x = 3; // stack
    let mut b = Box::new(3); // heap
                             // Box::new(3) alloue un i32 sur le heap
                             // b est un pointeur intelligent (smart pointer) stocke sur le stack
                             // Pour acceder a la valeur, on dereference avec *b
                             // println! sait afficher Box<T> si T: Display
    println!("Valeur initiale : {}", *b);

    // On modifie la valeur pointee
    *b = *b + 10;

    println!("Valeur modifiee : {}", *b);
}
