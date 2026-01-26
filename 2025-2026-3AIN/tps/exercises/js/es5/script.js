const digitsDec = "0123456789";
const digitsBin = "01";

const flipC2Bin = (binNumStr) => {
    let newNumStr = Array.from(binNumStr).map((c) => (c === "0" ? "1" : "0"));
    for (let i = newNumStr.length - 1; i >= 0; i--) {
        if (newNumStr[i] === "1") {
            newNumStr[i] = "0";
        } else {
            newNumStr[i] = "1";
            break;
        }
    }
    return newNumStr.join("");
};

const binToDec = (number) => {
    const convertedNumber =
        typeof number == "string" ? number : number.toString();

    const isNeg = convertedNumber.length === 16 && convertedNumber[0] === "1";
    const convertedC2 = isNeg ? flipC2Bin(convertedNumber) : convertedNumber;

    let out = 0;
    for (let i = 1; i < convertedC2.length; i++) {
        const index = digitsBin.indexOf(convertedC2[i]);
        if (index === -1) {
            alert("Number invalid!");
            return 0;
        }

        out += index * Math.pow(2, convertedC2.length - i - 1);
    }

    if (isNeg) out = -out;

    return out;
};

const decToBin = (number) => {
    const isNeg = number[0] === "-";
    let convertedNumber = isNeg ? number.substring(1) : number;

    let out = "";
    while (convertedNumber != 0) {
		const character = digitsDec[convertedNumber % 2];
		if (character == undefined) {
            alert("Number invalid!");
            return 0;
		}
        out += character;
        convertedNumber = Math.floor(convertedNumber / 2);
    }

    return isNeg
        ? flipC2Bin(out.split("").reverse().join("").padStart(16, "0"))
        : out.split("").reverse().join("").padStart(16, "0");
};

const binTxt = document.getElementById("bin");
const decTxt = document.getElementById("dec");

binTxt.addEventListener("change", () => {
    binTxt.value = binTxt.value.trim();
    binTxt.value = binTxt.value.trimStart("0");
    decTxt.value = binToDec(binTxt.value);
});

decTxt.addEventListener("change", () => {
    decTxt.value = decTxt.value.trim();
    binTxt.value = decToBin(decTxt.value);
});
