/* Diego Massanova 3AIN */

// Stato
let ans = 0;
let ansDecimals = 0;
let left = null;
let leftDecimals = 0;
let right = null;
let rightDecimals = 0;
let calcType = null;

// Funzioni di display
const writeToResult = (data, append) => {
    let resElem = document.getElementById("res");
    let newData = data + " ";
    append ? (resElem.textContent += newData) : (resElem.textContent = newData);
};

const writeCalc = () => {
    if (left != null)
        writeToResult(leftDecimals > 0 ? left.toFixed(leftDecimals - 1) : left);
    if (calcType != null) writeToResult(calcTypeToSign(calcType), true);
    if (right != null)
        writeToResult(
            rightDecimals > 0 ? right.toFixed(rightDecimals - 1) : right,
            true,
        );
};

// JS è esoterico
const sum = (l, r) => l + r;
const sub = (l, r) => l - r;
const mul = (l, r) => l * r;
const div = (l, r) => l / r;
const mod = (l, r) => l % r;
const pot = (l, r) => l ** r;
const calcTypeToCb = (i) => [sum, sub, mul, div, mod, pot][i];
const calcTypeToSign = (i) => ["+", "-", "*", "/", "%", "^"][i];

const setCalcType = (i) => {
    if (left != null) {
        decimals = false;
        calcType = i;
        writeCalc();
    }
};
document.getElementById("sum").addEventListener("click", () => setCalcType(0));
document.getElementById("sub").addEventListener("click", () => setCalcType(1));
document.getElementById("mul").addEventListener("click", () => setCalcType(2));
document.getElementById("div").addEventListener("click", () => setCalcType(3));
document.getElementById("mod").addEventListener("click", () => setCalcType(4));
document.getElementById("pot").addEventListener("click", () => setCalcType(5));

// Write Numbers
const addDigit = (base, num, decimals) => {
    if (base == null) return [num, 0];
    if (decimals > 0) {
        let x = base + num * 10 ** -decimals;
        decimals++;
        return [x, decimals];
    } else {
        return [base * 10 + num, 0];
    }
};
for (const element of Array.from(document.getElementsByClassName("num"))) {
    let valueNum = parseInt(element.textContent);
    element.addEventListener("click", () => {
        if (calcType != null) {
            let out = addDigit(right, valueNum, rightDecimals);
            [right, rightDecimals] = out;
        } else {
            let out = addDigit(left, valueNum, leftDecimals);
            [left, leftDecimals] = out;
        }
        writeCalc();
    });
}

// Dot
document.getElementById("dot").addEventListener("click", () => {
    calcType != null ? rightDecimals++ : leftDecimals++;
    writeToResult(".", true);
});

// Ans
document.getElementById("ans").addEventListener("click", () => {
    if (calcType != null) {
        right = ans;
        rightDecimals = ansDecimals;
    } else {
        left = ans;
        leftDecimals = ansDecimals;
    }
    writeCalc();
});

// Cancella
const cancNum = (num, decimals) => {
    if (decimals == 0) {
        let divided = num / 10;
        if (divided < 1) return null;
        return [Math.floor(divided), 0];
    } else {
        let moved = num * 10 ** (decimals - 2);
        decimals--;
        return [Math.floor(moved) * 10 ** (-decimals + 1), decimals];
    }
};

document.getElementById("can").addEventListener("click", () => {
    if (right != null) {
        [right, rightDecimals] = cancNum(right, rightDecimals);
        writeCalc();
        return;
    }
    if (calcType != null) {
        calcType = null;
        writeCalc();
        return;
    }
    [left, leftDecimals] = cancNum(left, leftDecimals);

    writeCalc();
});

// Calcolo finale
document.getElementById("equ").addEventListener("click", () => {
    ansDecimals = decimals;
    if (right == null) return;
    ans = calcTypeToCb(calcType)(left, right);
    writeToResult(ans);
    calcType = null;
    left = ans;
    right = null;
    leftDecimals = ansDecimals;
    rightDecimals = 0;
});
