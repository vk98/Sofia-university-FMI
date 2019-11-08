function jumpingJimmy(tower, jumpHeight) {
    return tower.reduce((acc, elem, i, arr)=>{
        if (jumpHeight < elem){
            arr.splice(0);
            return acc;
        }
        else{
           return (acc += elem)
        }
    }, 0);
}