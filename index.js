const findAndReplace = require("bindings")("ReplaceStringCpp");
const express = require("express");
const pug = require("pug");
const fs = require("fs");
const cors = require('cors');
const path = require('path');


const app = express();
app.use(express.static(__dirname + '/web'));
const port = process.env.PORT || 8080;
app.use(express.json());
app.use(cors());

app.get("/", (req, res) => {
    res.sendFile("web/index.html");
});

app.get("/findAndReplace", (req, res) =>{
    res.json(findAndReplace.ReplaceString(req.query.input, req.query.find, req.query.replace));
});

app.listen(process.env.PORT || 2023, () => {
    console.log("Listening on port 2023 :)");
});