#include <stdio.h>
int main() {
    int marks, total = 0, count = 0;
    char choice;
    float average, percentage;
    printf("Enter marks out of 100 (enter -1 to quit): ");
    scanf("%d", &marks);
    while (marks != -1) {
        total += marks;
        count++;
        printf("Enter marks out of 100 (enter -1 to quit): ");
        scanf("%d", &marks);
    }
    average = (float)total / count;
    percentage = (average / 100) * 100;
    printf("Average marks: %.2f\n", average);
    printf("Percentage: %.2f%%\n", percentage);
    return 0;
}