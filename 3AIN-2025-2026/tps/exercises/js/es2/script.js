/* Diego Massanova 3AIN */

// Stato
let left = null;
let right = null;
let calcType = null;

// Funzioni di display
const writeToResult = (data, append) => {
    let resElem = document.getElementById("res");
    let newData = data + " ";
    append ? (resElem.textContent += newData) : (resElem.textContent = newData);
};

const writeCalc = () => {
    if (left != null) writeToResult(left);
    if (calcType != null) writeToResult(calcTypeToSign(calcType), true);
    if (right != null) writeToResult(right, true);
};

// JS è esoterico
const sum = (l, r) => l + r;
const sub = (l, r) => l - r;
const mul = (l, r) => l * r;
const div = (l, r) => l / r;
const calcTypeToCb = (i) => [sum, sub, mul, div][i];
const calcTypeToSign = (i) => ["+", "-", "*", "/"][i];

const setCalcType = (i) => {
    if (left != null) {
        calcType = i;
        writeCalc();
    }
};
document.getElementById("sum").addEventListener("click", () => setCalcType(0));
document.getElementById("sub").addEventListener("click", () => setCalcType(1));
document.getElementById("mul").addEventListener("click", () => setCalcType(2));
document.getElementById("div").addEventListener("click", () => setCalcType(3));

// Write Numbers
const addDigit = (base, num) => {
    if (base == null) return num;
    return base * 10 + num;
};
for (const element of Array.from(document.getElementsByClassName("num"))) {
    let valueNum = parseInt(element.textContent);
    element.addEventListener("click", () => {
        if (calcType != null) {
            right = addDigit(right, valueNum);
            writeCalc();
            return;
        }
        left = addDigit(left, valueNum);
        writeCalc();
    });
}

// Cancella
const cancNum = (num) => {
    let divided = num / 10;
    if (divided < 1) return null;
    return Math.floor(divided);
};

document.getElementById("can").addEventListener("click", () => {
    if (right != null) {
        right = cancNum(right);
        writeCalc();
        return;
    }
    if (calcType != null) {
        calcType = null;
        writeCalc();
        return;
    }
    left = cancNum(left);

    writeCalc();
});

// Calcolo finale
document.getElementById("equ").addEventListener("click", () => {
    if (right == null) return;
    writeToResult(calcTypeToCb(calcType)(left, right));
    calcType = null;
    left = null;
    right = null;
});
