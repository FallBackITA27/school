document.getElementById("submit").addEventListener("click", () => {
    const password = document.getElementById("password").value;
    const username = document.getElementById("username").value;
    document.getElementById("errPara").innerHTML = "";

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
            if (r.resp === 3) {
                document.getElementById("errPara").innerHTML = "Errore: Password errata.";
            } else if (r.resp === 2) {
                document.getElementById("errPara").innerHTML = "Errore: Utente inesistente.";
            } else if (r.resp === 0) {
                document.getElementById("errPara").innerHTML = "Successo.";
            }
        });
});
