# Rust 

This directory contains notes and excercises from my time learning rust.

The main resources I am using are:

- [Comprehensive Rust](https://google.github.io/comprehensive-rust)
- [The Rust Programming Language](https://rust-book.cs.brown.edu/title-page.html)

# Notes

The following are my notes on Rust 

## Ownership

- Rust operates on the idea of data ownership rather than C style memory management or a garbage collector. This allows Rust to be memory safe.
- It does this by using something called the borrow checker. The borrow checker makes sure that ownership is propperly managed.

A value can only ever be owned by a single variable. 
