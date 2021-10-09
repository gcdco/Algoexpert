function minimumCharactersForWords(words) {
	let mp = {};
	
	for(word of words){
		let wordMap = countCharInWord(word);
		mp = updateHashmap(mp, wordMap);
	}
		
  return createFrequencyArray(mp);
}

const countCharInWord = (word) => {
	let mp = {};
	for(const char of word){
		if(!mp[char]){
			mp[char] = 1;
		}
		else{
			mp[char] += 1;
		}
	}
	return mp;
}

const updateHashmap = (mp, currentMp) => {	
    for (const character in currentMp) {
        if (!(character in mp)) {
        	mp[character] = currentMp[character];
        } else {
					mp[character] = Math.max(mp[character], currentMp[character]);
        }
    }
    return mp;
}


const createFrequencyArray = (mp) => {
	let answer = [];
	for(character in mp){
		for(let i = 0; i < mp[character]; i++){
			answer.push(character);
		}
	}
	return answer;
}

// Do not edit the line below.
exports.minimumCharactersForWords = minimumCharactersForWords;
