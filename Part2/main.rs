use std::mem;

fn main() {
    let mut v = Vec::with_capacity(1_000_000);
    for i in 0..1_000_000 { v.push(i); }
    let sum: i64 = v.iter().map(|&x| x as i64).sum();
    println!("Sum: {}", sum);
    println!("Vec struct size: {}", mem::size_of_val(&v));
    println!("Heap size: {}", v.capacity() * mem::size_of::<i32>());
}
