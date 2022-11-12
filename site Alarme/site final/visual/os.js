
    function ConfirmarSolicitacao(){
    
    document.getElementById("solicitar");
    alert ("O.S solicitada com sucesso");
}

    
    function valida_form (){
        
        if(document.getElementById("nome").value.length < 1){
        alert('Por favor, preencha o campo nome');
        return false
        }
        
        if(document.getElementById("telefone").value.length < 1){
        alert('Por favor, preencha o campo telefone');
        return false
        }
    
        if(document.getElementById("email").value.length < 1){
        alert('Por favor, preencha o campo email');
        return false
        }
        
        
        if(document.getElementById("cidade").value.length < 1){
        alert('Por favor, preencha o campo cidade');
        return false 
        }
        if(document.getElementById("endereco").value.length < 1){ 
        alert('Por favor, preencha o campo endereço');
        return false
        }
        if(document.getElementById("numero").value.length < 1){
        alert('Por favor, preencha o campo número');
        return false
        }
        if(document.getElementById("bairro").value.length < 1){
        alert('Por favor, preencha o campo bairro');
        return false 
        }
        if(document.getElementById("problema").value.length < 1){     
        alert('Por favor, preencha o campo problema');
        return false       
        }
        
        ConfirmarSolicitacao();
        
    }
    