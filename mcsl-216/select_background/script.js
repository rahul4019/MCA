const dropdown = document.getElementById("dropdown");
const getCookies = document.cookie;

const backgroundColorCookie = getCookies
  .split("; ")
  .find((cookie) => cookie.startsWith("backgroundColor="));

if (backgroundColorCookie) {
  const backgroundColor = backgroundColorCookie.split("=")[1];
  console.log(backgroundColor);
  document.body.style.backgroundColor = backgroundColor;
  dropdown.value = backgroundColor;
} else {
  console.log("backgroundColorCookie not found");
  document.body.style.backgroundColor = dropdown.value;
}

dropdown.addEventListener("click", function () {
  document.body.style.backgroundColor = dropdown.value;
  document.cookie = `backgroundColor=${dropdown.value}; path=/;`;
});
