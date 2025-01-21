const setCookieBtn = document.getElementById("setCookie");
const getCookieBtn = document.getElementById("getCookie");
const error = document.getElementById("error");
const success = document.getElementById("success");

setCookieBtn.addEventListener("click", function () {
  const key = document.getElementById("key").value.trim();
  const value = document.getElementById("value").value.trim();

  if (!key || !value) {
    error.innerText = "Please enter key and value";
    success.innerText = "";
    return;
  } else {
    error.innerText = "";
  }

  document.cookie = `${key}=${value}; path=/; expires=${new Date(Date.now() + 24 * 60 * 60 * 1000)}`;
  success.innerText = `cookie ${key} set successfully!`;
});

getCookieBtn.addEventListener("click", function () {
  window.alert(document.cookie);
});
