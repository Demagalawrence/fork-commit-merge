// ExpressJS - Easy

//const { get } = require("cheerio/lib/api/traversing");
const express = require("express");
const app = express();
const port = 6969;

// TODO: Implement `get` method for / route
app.get("/",(req,res)=>{
    res.send("Hello, Express!");
})
// TODO: Implement `listen` method

app.listen(6969,function(){
    return console.log("Server is running on port 6969");
});
