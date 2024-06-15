#include<stdio.h>
#include<string.h>
int main() 
{
    char s1[50], s2[50];
    printf("Enter the string\n");
	scanf("%s %s",s1,s2);
    // We need to use a staticly allocated array or we will run out of stack space (results in a segmentation fault)
    static int array[100][100];
    // Initialize array 
	int i,j;
    for( i = 0; i < strlen(s1); i++) {
       for( j = 0; j < strlen(s2); j++) {
           array[i][j] = 0;
       }
    }
    // Use dynamic programming to determine the size of the largest subsequence
    // We can break the problem down into parts by considering each string, character by character
    // If the two strings have the same char at the same index, then the largest subsequence at that point
    // is simply the largest subsequence before that char was added to either string + 1
    // If the two strings DON'T have the same char at the same index, then the largest subsequence at that point
    // is the larger of either a) string1 without that char or b) string2 without that char 
    for( i = 0; i < strlen(s1); i++) {
        for( j = 0; j < strlen(s2); j++) {
            if(s1[i] == s2[j]) {
                // Check if a diagonal cell (a smaller subsequence) exists 
                // If it does, increment by 1 + the value of the cell (size of the previous subsequence)
                // Otherwise set the cell equal to 1 
                if(i > 0 && j > 0) {
                    array[i][j] = array[i-1][j-1] + 1;
                } else {
                    array[i][j] = 1;
                }
            } else if(i == 0 && j > 0) {
                // Take the cell above
                array[i][j] = array[i][j-1];
            } else if(i > 0 && j == 0) {
                // Take the cell to the left
                array[i][j] = array[i-1][j];
            } else if(i > 0 && j > 0) {
                // Take the bigger of the cell above or to the left
                if(array[i][j-1] > array[i-1][j]) 
		{
                    array[i][j] = array[i][j-1];
                } else {
                    array[i][j] = array[i-1][j];
                }
            }
        }
    }
  printf("%d\n",array[strlen(s1)-1][strlen(s2)-1]);
    return 0;
}
