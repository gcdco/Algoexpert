function taskAssignment(k, tasks) {
	// Get the indices so we can build the answer array
	const taskDurationIndices = getTaskDurationIndices(tasks);
	// Sort the array to match shortest w/ longest tasks
	const sortedTasks = [...tasks].sort((a,b) => a - b);
	const taskDurationIdxAnswer = [];
	// Go through sorted tasks, pair tasks, and push indices
	for(let i = 0; i < k; i++){
		const task1Duration = sortedTasks[i];
		const task1Indices = taskDurationIndices[task1Duration];
		const idxTask1 = task1Indices.pop();
		
		const task2DurationIdx = tasks.length - 1 - i;
		const task2Duration = sortedTasks[task2DurationIdx]
		const task2Indices = taskDurationIndices[task2Duration];
		const idxTask2 = task2Indices.pop();
		
		taskDurationIdxAnswer.push([idxTask1,idxTask2]);
	}
  return taskDurationIdxAnswer;
}

const getTaskDurationIndices = (tasks) => {
	// return -> {value: [idx, idx, ...], value: ...}
	const taskDurationIndicesMapped = {};
	for(let i = 0; i < tasks.length; i++) {
		const task = tasks[i];
		if(task in taskDurationIndicesMapped){
			taskDurationIndicesMapped[task].push(i);
		}
		else {
			taskDurationIndicesMapped[task] = [i]
		}
	}
		return taskDurationIndicesMapped;
}

// Do not edit the line below.
exports.taskAssignment = taskAssignment;
