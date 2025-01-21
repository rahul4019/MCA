submitBtn.addEventListener("click", handleSubmit);
const db = {};

function handleSubmit(e) {
  e.preventDefault();
  const isValidForm = validateFields();

  if (isValidForm) {
    window.alert("Form submited");
  }
}

function insertInDB(name, email, phone, checkIn, checkOut) {
  db.name = name;
  db.email = email;
  db.phone = phone;
  db.checkIn = checkIn;
  db.checkOut = checkOut;
  console.log(db);
}

function validateFields() {
  const name = document.getElementById("name").value.trim();
  const email = document.getElementById("email").value.trim();
  const phone = document.getElementById("phone").value.trim();
  const checkIn = document.getElementById("checkIn").value;
  const checkOut = document.getElementById("checkOut").value;
  const error = document.getElementById("error");

  if (!name) {
    error.textContent = "Name is required!";
    return false;
  } else if (!email) {
    error.textContent = "Email is required!";
    return false;
  } else if (!email.includes("@")) {
    error.textContent = "Invalid Email!";
    return false;
  } else if (!phone) {
    error.textContent = "Phone is required!";
    return false;
  } else if (phone.length !== 10) {
    error.textContent = "Invalid phone number!";
    return false;
  } else if (!checkIn) {
    error.textContent = "Check In date is required!";
    return false;
  } else if (!checkOut) {
    error.textContent = "Check Out date is required!";
    return false;
  } else {
    error.textContent = "";
  }
  insertInDB(name, email, phone, checkIn, checkOut);
  return true;
}
