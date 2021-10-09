/**
 * @param {number[]} height
 * @return {number}
 */
var maxArea = function(height) {
    if(height.length < 1) return 0;
    let len = height.length, l = 0, r = height.length - 1;
    let area = 0, currentIdxArea = 1;
    
    for(let i = 0; i < len; i++){
        // get shortest
        // area = shortest * distance between idx
        if(height[l] < height[r]){
            currentIdxArea = height[l] * (r - l);
        }
        else {
            currentIdxArea = height[r] * (r - l);
        }
        
        if(currentIdxArea > area){
           area = currentIdxArea;
        }
        // Greedy approach
        if(height[l] < height[r]){
            l++;   
        }
        else {
            r--;
        }
    }
    
    return area;
};
