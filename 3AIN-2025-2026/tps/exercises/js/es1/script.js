let num = 10;
const recalc = () => {
    // Reset number display
    document.getElementById("num").textContent = num;

    // Clear table
    let table = document.getElementById("tabelline");
    table.innerHTML = "";

    // Create Table
    for (let i = 1; i <= num; i++) {
        let row = document.createElement("tr");
        for (let j = 1; j <= num; j++) {
            let cell = document.createElement("td");
            cell.textContent = i * j;
            row.appendChild(cell);
        }
        table.appendChild(row);
    }
};

document.addEventListener("DOMContentLoaded", recalc);
document.getElementById("add").addEventListener("click", () => {
    num++;
    recalc();
});
document.getElementById("sub").addEventListener("click", () => {
    if (num === 1) return;
    num--;
    recalc();
});
