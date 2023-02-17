#include<stdio.h>
int findConnectedComponents(int arr[5][5]) 
{ 
    int count = 0; 
  
    // Check all the elements of the array 
    for (int i = 0; i < 5; i++) 
    { 
        for (int j = 0; j < 5; j++) 
        { 
            // If an element is 1 and is 
            // not visited yet, then 
            // new connected component 
            // found 
            if (arr[i][j] == 1 &&  
                arr[i][j] != 0) 
            { 
                // Visit all the elements 
                // in the connected components 
               DFS(arr, i, j);
                // Increment count of 
                // connected components 
                count++; 
            } 
        } 
    } 
  
    return count; 
} 

//Function to traverse through the array
void DFS(int arr[5][5], int i, int j) 
{ 
    // Make the current element  
    // as visited 
    arr[i][j] = 0; 
    // Recur for all connected 
    // elements 
    for (int row = i - 1; row <= i + 1; row++) 
    { 
        for (int col = j - 1; col <= j + 1; col++) 
        { 
            if (row >= 0 && row < 5 &&  
                col >= 0 && col < 5 &&  
                arr[row][col] == 1) 
            { 
              DFS(arr, row, col); 
            } 
        } 
    } 
} 

//Driver code
int main() 
{ 
    int arr[5][5] =  
    { 
        { 1, 0, 0, 0, 0 }, 
        { 0, 1, 0, 1, 1 }, 
        { 0, 0, 0, 0, 0 }, 
        { 1, 0, 0, 1, 1 }, 
        { 0, 0, 0, 1, 1 } 
    }; 
  
    printf("Number of connected components: %d\n", 
           findConnectedComponents(arr)); 
    return 0; 
} 