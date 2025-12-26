function addBooking() {

 
    var roomNumber = document.getElementById("roomNumber").value;
    var customerName = document.getElementById("customerName").value;
    var stayDays = document.getElementById("stayDays").value;

    
    var totalRent = stayDays * 1500;


    var table = document.getElementById("bookingTable");
    var newRow = table.insertRow();

    newRow.insertCell(0).innerHTML = roomNumber;
    newRow.insertCell(1).innerHTML = customerName;
    newRow.insertCell(2).innerHTML = stayDays;
    newRow.insertCell(3).innerHTML = totalRent;

    document.getElementById("roomNumber").value = "";
    document.getElementById("customerName").value = "";
    document.getElementById("stayDays").value = "";
}