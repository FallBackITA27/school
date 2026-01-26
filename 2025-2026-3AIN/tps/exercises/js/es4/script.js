const digits = "0123456789ABCDEF";
const getDigitsFromBase = (n = 10) =>
    n !== 16 ? digits.substring(0, n) : digits;

const convertToDec = (number, base) => {
    const convertedNumber =
        typeof number == "string" ? number : number.toString();
    const digits = getDigitsFromBase(base);

    let out = 0;
    for (let i = 0; i < convertedNumber.length; i++) {
        const index = digits.indexOf(convertedNumber[i]);
        if (index === -1) {
            alert("Number invalid!");
            return 0;
        }

        out += index * Math.pow(base, convertedNumber.length - i - 1);
    }

    return out;
};

const convertDecToOther = (number, base) => {
    let out = "";
    const digits = getDigitsFromBase(base);
    while (number != 0) {
        out += digits[number % base];
        number = Math.floor(number / base);
    }
    return out.split("").reverse().join("");
};

const binTxt = document.getElementById("bin");
const octTxt = document.getElementById("oct");
const decTxt = document.getElementById("dec");
const hexTxt = document.getElementById("hex");

binTxt.addEventListener("change", () => {
    binTxt.value = binTxt.value.trim();
    decTxt.value = convertToDec(binTxt.value, 2);
    octTxt.value = convertDecToOther(decTxt.value, 8);
    hexTxt.value = convertDecToOther(decTxt.value, 16);
});

octTxt.addEventListener("change", () => {
    octTxt.value = octTxt.value.trim();
    decTxt.value = convertToDec(octTxt.value, 8);
    binTxt.value = convertDecToOther(decTxt.value, 2);
    hexTxt.value = convertDecToOther(decTxt.value, 16);
});

decTxt.addEventListener("change", () => {
    decTxt.value = decTxt.value.trim();
    binTxt.value = convertDecToOther(decTxt.value, 2);
    octTxt.value = convertDecToOther(decTxt.value, 8);
    hexTxt.value = convertDecToOther(decTxt.value, 16);
});

hexTxt.addEventListener("change", () => {
    hexTxt.value = hexTxt.value.trim().toUpperCase();
    decTxt.value = convertToDec(hexTxt.value, 16);
    binTxt.value = convertDecToOther(decTxt.value, 2);
    octTxt.value = convertDecToOther(decTxt.value, 8);
});
