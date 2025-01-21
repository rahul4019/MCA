const display = document.getElementById("display");

function appendChar(char) {
  display.value += char;
}

function calculate() {
  try {
    const result = eval(display.value);
    display.value = result;
  } catch (error) {
    display.value = "Error";
  }
}

function clrScreen() {
  display.value = "";
}
