fn transpose(matrix: [[i32; 3]; 3]) -> [[i32; 3]; 3] {
    let mut resmat: [[i32; 3]; 3] = [[0; 3]; 3];
    for i in 0..3 {
        for j in 0..3 {
            resmat[j][i] = matrix[i][j]
        }
    }
    return resmat
}

fn pretty_print(matrix: &[[i32; 3]; 3]) {
    for i in matrix {
        for j in i {
            print!("{j} ")
        }
        print!("\n")
    }
}

fn main() {
    let matrix = [
        [101, 102, 103], // <-- the comment makes rustfmt add a newline
        [201, 202, 203],
        [301, 302, 303],
    ];

    println!("matrix:");
    pretty_print(&matrix);

    let transposed = transpose(matrix);
    println!("transposed:");
    pretty_print(&transposed);
}
