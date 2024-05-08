document.querySelector("form").addEventListener("submit",todo)

function todo(){
    let name = document.getElementById("task").value
    let id   = document.getElementById("priority").value

    let tr = document.createElement("tr")
    let td1 = document.createElement("td")

    td1.innerHTML = name

    let td2 = document.getElementById("td")

    td2.innerHTML = id

    tr.append(td1,td2)
    document.querySelector("tbody").append(tr)
}