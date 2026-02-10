/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** sortPeople(char** names, int namesSize, int* heights, int heightsSize, int* returnSize) {
    
    // Create array of indices
    int idx[namesSize];
    for(int i = 0; i < namesSize; i++) {
        idx[i] = i;
    }
    
    // Sort indices based on heights (descending)
    for(int i = 0; i < namesSize - 1; i++) {
        for(int j = i + 1; j < namesSize; j++) {
            if(heights[idx[i]] < heights[idx[j]]) {
                int temp = idx[i];
                idx[i] = idx[j];
                idx[j] = temp;
            }
        }
    }
    
    // Allocate result array
    char** result = (char**)malloc(namesSize * sizeof(char*));
    
    // Fill result using sorted indices
    for(int i = 0; i < namesSize; i++) {
        result[i] = names[idx[i]];
    }
    
    *returnSize = namesSize;
    return result;
}
