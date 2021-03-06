/**
 * @param {string} s
 * @return {string}
 */
var longestPalindrome = function(s) {
    if(s == null || s.length < 1) return "";
    
    let start = 0, end = 0;
    
    for(let i = 0; i < s.length; i++){
        let len1 = expandPalindrome(s, i, i);
        let len2 = expandPalindrome(s, i, i + 1);
        let len = Math.max(len1, len2);
        
        if(len > end - start){
            start = Math.ceil(i - (len - 1) / 2);
            end = i + len / 2
        }
    }
    return s.substring(start, end + 1);
};

let expandPalindrome = (s, start, end) => {
    let L = start, R = end;
    while(L >= 0 && R < s.length && s.charAt(L) === s.charAt(R)){
        R++;
        L--;
    }
    return R - L - 1;
}
