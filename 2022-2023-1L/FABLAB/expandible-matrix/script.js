let cols = 1;
let rows = 1;

function createInputTemplate(className) {
    let element = document.createElement("input");
    element.setAttribute("type","number");
    element.setAttribute("max","9999");
    element.classList.add(className);
    return element;
}

document.getElementById("colAdd").addEventListener("click",function(){
    let matrixInput = createInputTemplate("matrixInput");
    for (let i = 0; i < rows; i++) {
        let row = document.getElementsByClassName("row")[i];
        row.appendChild(matrixInput.cloneNode());
    }
    let requestInput = createInputTemplate("requestInput");
    cols++;
    requestInput.setAttribute("placeholder",`D${cols}`)
    document.getElementById("quantityRequests").appendChild(requestInput);
    return;
});

document.getElementById("rowAdd").addEventListener("click",function(){
    let row = document.createElement("div");
    row.classList.add("row");
    let matrixInput = createInputTemplate("matrixInput");
    for (let i = 0; i < cols; i++) row.appendChild(matrixInput.cloneNode());
    document.getElementById("matrix").appendChild(row);
    let availableInput = createInputTemplate("requestInput");
    rows++;
    availableInput.setAttribute("placeholder",`S${rows}`)
    document.getElementById("quantityAvailable").appendChild(availableInput);
    return;
});

document.getElementById("colRemove").addEventListener("click",function(){
    if (cols < 2) return;
    for (let i = 0; i < rows; i++) {
        let row = document.getElementsByClassName("row")[i];
        row.removeChild(row.lastChild);
    }
    let firstRow = document.getElementById("quantityRequests");
    console.log(firstRow);
    firstRow.removeChild(firstRow.lastChild); // Sintassi strana, grazie JS.
    cols--;
    return;
});

document.getElementById("rowRemove").addEventListener("click",function(){
    if (rows < 2) return;
    let rowElements = document.getElementsByClassName("row");
    rowElements[rowElements.length-1].remove();
    let firstCol = document.getElementById("quantityAvailable");
    firstCol.removeChild(firstCol.lastChild);
    rows--;
    return;
});

document.getElementById("upload").addEventListener("click",function(){
    let outJSON = {};
    let requestsRow = document.getElementById("quantityRequests");
    let productCol = document.getElementById("quantityAvailable");
    let matrix = document.getElementById("matrix");
    
    return;
});