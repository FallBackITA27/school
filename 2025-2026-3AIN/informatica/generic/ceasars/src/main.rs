struct Letters<const N: usize> {
    data: [char; N],
    position: usize,
}

impl<const N: usize> Letters<N> {
    const fn new(v: [char; N]) -> Self {
        Self {
            data: v,
            position: 0,
        }
    }

    fn find(&mut self, find_char: char) -> bool {
        for (idx, char) in self.data.into_iter().enumerate() {
            if find_char == char {
                self.position = idx;
                return true;
            }
        }
        false
    }

    fn ceasar(&self, offset: usize) -> char {
        self.data[(self.position + offset) % N]
    }

    fn deceasar(&self, offset: usize) -> char {
        self.data[(self.position + N - offset) % N]
    }

    fn atbash(&self) -> char {
        self.data[N - 1 - self.position]
    }
}

fn ceasar<const N: usize>(str: &str, letters: &mut Letters<N>, offset: usize) -> String {
    let mut ceasar = String::with_capacity(str.len());
    for char in str.chars() {
        match letters.find(char) {
            false => ceasar.push(char),
            true => ceasar.push(letters.ceasar(offset)),
        }
    }

    ceasar
}

fn deceasar<const N: usize>(str: &str, letters: &mut Letters<N>, offset: usize) -> String {
    let mut deceasar = String::with_capacity(str.len());
    for char in str.chars() {
        match letters.find(char) {
            false => deceasar.push(char),
            true => deceasar.push(letters.deceasar(offset)),
        }
    }

    deceasar
}

fn atbash<const N: usize>(str: &str, letters: &mut Letters<N>) -> String {
    let mut atbash = String::with_capacity(str.len());
    for char in str.chars() {
        match letters.find(char) {
            false => atbash.push(char),
            true => atbash.push(letters.atbash()),
        }
    }

    atbash
}

fn rot13(str: &str, letters: &mut Letters<26>) -> String {
    ceasar(str, letters, 13)
}

fn scitala_persiana(str: &str) -> String {
    let mut scitala_persiana = String::with_capacity(str.len());
    let str = str.replace([' ', '\n', '\t'], "");
    let str_len = str.len();
    let str_chars = str.chars().collect::<Vec<char>>();
    for index in 0..str_len {
        let index = index * 3;
        scitala_persiana.push(str_chars[index % str_len + index / str_len]);
    }

    scitala_persiana
}

fn main() {
    println!("Inserisci stringa");
    let mut str = String::new();
    let _ = std::io::stdin().read_line(&mut str).unwrap();
    let str = str;

    println!("Inserisci offset");
    let mut offset = String::new();
    let _ = std::io::stdin().read_line(&mut offset).unwrap();
    let offset = offset.trim().parse::<usize>().unwrap();

    let ceasar = ceasar(
        &str,
        &mut Letters::new([
            'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q',
            'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H',
            'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y',
            'Z', ' ', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
        ]),
        offset,
    );

    let deceasar = deceasar(
        &ceasar,
        &mut Letters::new([
            'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q',
            'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H',
            'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y',
            'Z', ' ', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
        ]),
        offset,
    );

    let rot13_s = rot13(
        &str,
        &mut Letters::new([
            'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q',
            'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
        ]),
    );

    let derot13 = rot13(
        &rot13_s,
        &mut Letters::new([
            'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q',
            'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
        ]),
    );

    let atbash_s = atbash(
        &str,
        &mut Letters::new([
            'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q',
            'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H',
            'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y',
            'Z', ' ', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
        ]),
    );

    let deatbash = atbash(
        &atbash_s,
        &mut Letters::new([
            'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q',
            'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H',
            'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y',
            'Z', ' ', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
        ]),
    );

    let scitala = scitala_persiana(&str);

    println!("Cesare: {ceasar}");
    println!("Decesare: {deceasar}");
    println!("ROT13: {rot13_s}");
    println!("DEROT13: {derot13}");
    println!("ATBASH: {atbash_s}");
    println!("DEATBASH: {deatbash}");
    println!("SCITALA PERSIANA: {scitala}");
}
