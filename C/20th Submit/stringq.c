/*Consider a string s containing a sentence display the last word of the string along with its length
s="Hello World"
O/p: The length of "World" is 5
*/
#include <stdio.h>
#include <string.h>

int main() {
    int count=0;
    char input[1000];
    printf("Enter a string: ");
   gets(input);
    
    int length = strlen(input);
    
    if (length == 0) {
        printf("The string is empty.\n");
    } else {
       
        int i = length - 1;
        
        while (i >= 0 && (input[i] == ' ' || input[i] == '\n' || input[i] == '\t')) {
          
            i--;
        }
        
        int wordEnd = i;
        
        while (i >= 0 && input[i] != ' ' && input[i] != '\n' && input[i] != '\t') {
          
            i--;
        }
        
        int wordStart = i + 1;
        
        if (wordEnd >= wordStart) {
          
            printf("Last word is ");
            for (int j = wordStart; j <= wordEnd; j++) {
                count++;
                printf("%c", input[j]);
            }
            
        } else {
            printf("No words found in the string.\n");
        }
    }
    printf(" and length is %d",count);
    return 0;
}