function validStartingCity(distances, fuel, mpg) {
  // o(n) Solution
	const numberOfCities = distances.length;
	let startingCityMilesRemaining = 0;
	let startingCityidx = 0;
	let milesRemainingForCurrentCity = 0;
	for(let currentCityIdx = 1; currentCityIdx < numberOfCities; currentCityIdx++){
		const distanceFromPreviousCity = distances[currentCityIdx-1];
		const fuelFromPreviousCity = fuel[currentCityIdx-1];
		milesRemainingForCurrentCity += 
					fuelFromPreviousCity * mpg - distanceFromPreviousCity;
		
		if(milesRemainingForCurrentCity < startingCityMilesRemaining){
			startingCityMilesRemaining = milesRemainingForCurrentCity;
			startingCityidx = currentCityIdx;
		}
	}
	return startingCityidx;
}
  

// Do not edit the line below.
exports.validStartingCity = validStartingCity;
