document.addEventListener("DOMContentLoaded",()=>{
    const numero1Input = document.getElementById("numero1")
    const numero2Input = document.getElementById("numero2")  
    const operacionesSelect= document.getElementById("operaciones")
    const resultado = document.getElementById("resultado")
    const formulario = document.getElementById("calculadora") 
    
    formulario.addEventListener("submit",(e)=>{
        e.preventDefault()
        var numero1 =numero1Input.value;
        var numero2 =numero2Input.value;
        var operacion =operacionesSelect.value;
        var respuesta ="";
    
    
        switch(operacion){
            case"suma":
             respuesta=numero1+numero2;
             break;
            case"resta":
             respuesta=numero1-numero2;
             break;
            case"multiplicacion":
             respuesta=numero1*numero2;
             break;
            case"division":
             respuesta=numero1/numero2;
             break;
            default:
                alert("Operacion no valida");
    
        }
    
    
    resultado.textContent= "Resultados = " + respuesta;
    
    })
    
    
    
    })
    
    