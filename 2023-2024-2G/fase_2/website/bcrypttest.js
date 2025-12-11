const express = require("express");
const bcrypt = require("bcrypt");
const fs = require("fs");

const saltRounds = 10;

const utentiPath = "./utenti.json";

const app = express();
app.use(express.static(__dirname + "/"));
app.use(express.urlencoded({ extended: true }));
app.use(express.json());

app.get("/", (req, res) => {
    res.sendFile(__dirname + "/");
});

app.get("/global.css", (req, res) => {
    res.sendFile(__dirname + "/global.css");
});

app.get("/reg/", (req, res) => {
    res.sendFile(__dirname + "/reg/");
});

app.get("/reg/script.js", (req, res) => {
    res.sendFile(__dirname + "/reg/script.js");
});

app.post("/reg/data", (req, res) => {
    const { username, password } = req.body;
    return fs.readFile(utentiPath, (err, data) => {
        const parsedData = JSON.parse(data);
        if (
            parsedData.find(({ username: forUsername }) => username === forUsername) === undefined
        ) {
            bcrypt.hash(password, saltRounds, function (err, hash) {
                parsedData.push({ username, password: hash });
                fs.writeFile(utentiPath, JSON.stringify(parsedData), () =>
                    res.end(Buffer.from(JSON.stringify({ resp: 0 }))),
                );
            });
        } else {
            res.end(Buffer.from(JSON.stringify({ resp: 5 })));
            return;
        }
    });
});

app.post("/login/data", (req, res) => {
    const { username, password } = req.body;
    return fs.readFile(utentiPath, (err, data) => {
        const parsedData = JSON.parse(data);
        const foundData = parsedData.find(({ username: forUsername }) => username === forUsername);
        if (foundData === undefined) {
            parsedData.push({ username, password });
            fs.writeFile(utentiPath, JSON.stringify(parsedData), () =>
                res.end(Buffer.from(JSON.stringify({ resp: 2 }))),
            );
        } else {
            bcrypt.compare(password, foundData.password, function (err, result) {
                if (result) {
                    res.end(Buffer.from(JSON.stringify({ resp: 3 })));
                    return;
                } else {
                    res.end(Buffer.from(JSON.stringify({ resp: 0 })));
                    return;
                }
            });
        }
    });
});

app.get("/login/", (req, res) => {
    res.sendFile(__dirname + "/login/");
});

app.listen(3000, () => {
    console.log("Started");
});
