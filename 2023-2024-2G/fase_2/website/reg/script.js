document.getElementById("submit").addEventListener("click", () => {
    const password = document.getElementById("password").value;
    const confPassword = document.getElementById("confPassword").value;
    const username = document.getElementById("username").value;
    if (username === "" || confPassword === "" || password === "") {
        document.getElementById("errPara").innerHTML = "Errore. I field sono vuoti.";
        return;
    }
    document.getElementById("errPara").innerHTML = "";
    if (password !== confPassword) {
        document.getElementById("errPara").innerHTML =
            "Errore. La password non è uguale nei due field.";
        return;
    }

    const body = JSON.stringify({ password, username });

    fetch("./data", {
        method: "POST",
        body: body,
        headers: {
            "Content-Type": "application/json",
        },
    })
        .then((r) => r.json())
        .then((r) => {
            if (r.resp === 5) {
                document.getElementById("errPara").innerHTML = "Errore: L'utente è già esistente.";
            } else if (r.resp === 0) {
                document.getElementById("errPara").innerHTML = "Successo.";
            }
        });
});
