document.getElementById("generate").addEventListener("click", () => {
    let max = parseInt(document.getElementById("max").value) ?? 4;
    const min = parseInt(document.getElementById("min").value) ?? 4;
    if (max < min) max = min;

    const usesUpperChars = document.getElementById("upperChars").checked;
    const usesLowerChars = document.getElementById("lowerChars").checked;
    const usesSpecialChars = document.getElementById("specialChars").checked;
    const usesNumberChars = document.getElementById("numberChars").checked;

    const output = document.getElementById("password");

    let hasUpper = !usesUpperChars;
    let hasLower = !usesLowerChars;
    let hasSpecial = !usesSpecialChars;
    let hasNumber = !usesNumberChars;
    let outStr = "";
    while (!hasUpper || !hasLower || !hasSpecial || !hasNumber) {
        let len = ((Math.random() * 10000) % (max - min)) + min;
        if (len < 4) len = 4;

        hasUpper = !usesUpperChars;
        hasLower = !usesLowerChars;
        hasSpecial = !usesSpecialChars;
        hasNumber = !usesNumberChars;
        outStr = "";

        for (let i = 0; i <= len; i++) {
            let character = String.fromCharCode((Math.random() * 400) % 256);

            const isUpper = character === character.toLocaleUpperCase();
            const isLower = character === character.toLocaleLowerCase();
            if (!isNaN(parseInt(character))) {
                if (!usesNumberChars) {
                    i--;
                    continue;
                }
                hasNumber = true;
            } else if (isUpper && isLower) {
                if (!usesSpecialChars) {
                    i--;
                    continue;
                }
                hasSpecial = true;
            } else if (isUpper) {
                if (!usesUpperChars) {
                    i--;
                    continue;
                }
                hasUpper = true;
            } else if (isLower) {
                if (!usesLowerChars) {
                    i--;
                    continue;
                }
                hasLower = true;
            }

            outStr += character;
        }
    }

    output.value = outStr;
});
