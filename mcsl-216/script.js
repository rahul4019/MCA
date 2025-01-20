const name = document.getElementById("name").value.trim();
const email = document.getElementById("email").value.trim();
const phone = document.getElementById("phone").value;
const checkIn = document.getElementById("checkIn").value;
const checkOut = document.getElementById("checkOut").value;
const error = document.getElementById("error");

submitBtn.addEventListener("click", handleSubmit);

function handleSubmit(e) {
  e.preventDefault();
  validateFields();
}

function validateFields() {
  console.log("name: ", name);
  if (!name) {
    error.textContent = "Name is required!";
  } else if (!email) {
    error.textContent = "Email is required!";
  } else if (!phone) {
    error.textContent = "Phone is required!";
  } else if (!checkIn) {
    error.textContent = "Check In date is required!";
  } else if (!checkOut) {
    error.textContent = "Check Out date is required!";
  }
}
