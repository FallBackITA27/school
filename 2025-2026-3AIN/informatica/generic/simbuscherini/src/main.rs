fn print_vec(v: impl Iterator<Item = u32>) {
    let mut line1 = String::from("| Utente |");
    let mut line3 = String::from("| Tempo  |");
    let mut line5 = String::from("| Attesa |");
    let mut line2 = String::from("+--------+");

    let mut wait = 0;
    for (idx, time) in v.enumerate() {
        let idx = format!("{}", idx + 1);
        let time_str = format!("{}", time);
        let str_wait = format!("{}", wait);
        let width = std::cmp::max(str_wait.len(), std::cmp::max(idx.len(), time_str.len()));

        wait += time;

        line1 += &format!(" {idx:width$} ");
        line3 += &format!(" {time_str:width$} ");
        line5 += &format!(" {str_wait:width$} ");

        for _ in 0..width + 2 {
            line2.push('-');
        }

        line1.push('|');
        line2.push('+');
        line3.push('|');
        line5.push('|');
    }

    println!("{line1}");
    println!("{line2}");
    println!("{line3}");
    println!("{line2}");
    println!("{line5}");
}

fn main() {
    println!("Inserisci il numero di utenti");

    let v = loop {
        let mut str = String::new();
        let _ = std::io::stdin().read_line(&mut str).unwrap();
        match str.trim().parse::<usize>() {
            Ok(v) => break v,
            Err(e) => {
                eprintln!("Errore: {e}");
                continue;
            }
        };
    };

    let mut users: Vec<u32> = Vec::with_capacity(v);
    for _ in 0..v {
        users.push(rand::random_range(5..30));
    }

    print_vec(users.iter().cloned());
}
