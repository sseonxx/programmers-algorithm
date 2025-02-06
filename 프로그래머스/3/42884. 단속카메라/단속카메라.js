function solution(routes) {
    let count = 0;
    
    let cameraX =  -30001 ;
    
    routes.sort((a,b)=> a[1] - b[1]);
    
    for(let[inX,outX] of routes){
        if(cameraX < inX) {
            count ++;
            cameraX = outX;
        }
    }
    
    return count;
}