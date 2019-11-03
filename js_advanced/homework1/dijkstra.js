const fs = require('fs')
const { promisify } = require('util')

const readFileAsync = promisify(fs.readFile)
const writeFileAsync = promisify(fs.writeFile)

let problem = {};

var readStartConfiguration = async (fileName) => {
    try {
        let fileData = (await readFileAsync(fileName)).toString();
        console.log(fileData)
        problem = JSON.parse(fileData);
    } catch (err) {
        console.log(err);
    }
}

var lowestCostNode = (costs, processed) => {
    return Object.keys(costs).reduce((lowest, node) => {
        if (lowest === null || costs[node] < costs[lowest]) {
            if (!processed.includes(node)) {
                lowest = node;
            }
        }
        return lowest;
    }, null);
};

var run = (graph, start, end) => {
    try {
        
        //costs table 
        let costs = JSON.parse(JSON.stringify(graph[start]));
        

        // store paths
        let parents = { finish: null };
        for (let child in graph[start]) {
            parents[child] = start;
        }

        // store nodes that have already been processed
        let processed = [];

        let node = lowestCostNode(costs, processed);

        while (node) {
            let cost = costs[node];
            let children = graph[node];
            for (let n in children) {
                let newCost = cost + children[n];
                if (!costs[n]) {
                    costs[n] = newCost;
                    parents[n] = node;
                }
                if (costs[n] > newCost) {
                    costs[n] = newCost;
                    parents[n] = node;
                }
            }
            processed.push(node);
            node = lowestCostNode(costs, processed);
        }

        let bestRoute = [end];
        let parent = parents[end];
        while (parent) {
            bestRoute.unshift(parent);
            parent = parents[parent];
        }

        let results = {
            distance: costs[end],
            path: bestRoute
        };

        return results;
    } catch (err) {
        console.log(err);
    }
};
readStartConfiguration("Graph.txt").then(async (data) => {
    let res = run(problem, "R", "Y");
    console.log(res);
    await writeFileAsync("Result.txt", JSON.stringify(res));
    console.log("Bye");
    process.exit();
})
