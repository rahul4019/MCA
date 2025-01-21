const calculateBtn = document.getElementById("calculate-btn");
calculateBtn.addEventListener("click", function () {
  const a00 = Number(document.getElementById("a00").value) || 0;
  const a01 = Number(document.getElementById("a01").value) || 0;
  const a10 = Number(document.getElementById("a10").value) || 0;
  const a11 = Number(document.getElementById("a11").value) || 0;

  const b00 = Number(document.getElementById("b00").value) || 0;
  const b01 = Number(document.getElementById("b01").value) || 0;
  const b10 = Number(document.getElementById("b10").value) || 0;
  const b11 = Number(document.getElementById("b11").value) || 0;

  const c00 = a00 * b00 + a01 * b10;
  const c01 = a00 * b01 + a01 * b11;
  const c10 = a10 * b00 + a11 * b10;
  const c11 = a10 * b01 + a11 * b11;

  document.getElementById("c00").value = c00;
  document.getElementById("c01").value = c01;
  document.getElementById("c10").value = c10;
  document.getElementById("c11").value = c11;
});
