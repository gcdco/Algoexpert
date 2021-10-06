/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {

    let numMap = new Map();
    
    for(let j = 0; j < nums.length; j++){
        let checkNum = target - nums[j];
        
        if(numMap[checkNum] >= 0) {
            return [numMap[checkNum] , j]
        }
        numMap[nums[j]] = j;
    }
    
    
    return [firstIdx, secondIdx];
    
};
