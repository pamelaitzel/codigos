const FRM_BANCO = document.querySelector("#frmBanco")
FRM_BANCO.addEventListener("submit", calcularCredito)

function calcularCredito(event){

    event.preventDefault()

    let tipoTarjeta = document.querySelector("#selectTipoTarjeta").value;
let credito = document.querySelector("#txtLimiteCredito").value;
if (tipoTarjeta===""||credito===""){
    alert (" llenar todos los campos");
    return;
}
let imprimirRes = document.getElementById("imprimirResultado") 
    imprimirRes.textContent = bancoTDA(tipoTarjeta,credito)
    
}
function bancoTDA(tipoTarjeta , credito){
let aumento=0;
switch(tipoTarjeta){
    case "tarjeta tipo 1":
     aumento =  0.25;
       break
    case"tarjeta tipo 2":
     aumento =  0.35;
        break
    case"tarjeta tipo 3":
       aumento =  0.40;
        break
    case"tarjeta tipo +":
       aumento =  0.50;
        break
}
let limCredito=parseFloat (credito) *(1+aumento) 
return "El limite de la tarjeta es de : $" + limCredito+
" :: Su Aumento es de un : " + aumento + "%"+
" :: Tipo de Tarjeta es: " + tipoTarjeta;

}