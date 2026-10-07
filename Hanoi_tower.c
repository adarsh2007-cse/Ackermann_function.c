#include <stdio.h>
int moves = 0; //Global declaraton
void hanoi(int n, char from, char to, char aux) {
    if (n == 0) {
        return;
    } else {
        hanoi(n-1, from, aux, to);
        printf("Move disk %d from %c to %c\n", n, from, to);
        moves++;
        hanoi(n-1, aux, to, from);
    }
}
int main() {
    int n;
    printf("Enter number of disks: ");
    scanf("%d", &n);
    printf("Disk movements:\n");
    hanoi(n, 'A', 'C', 'B');
    printf("Total number of disk moves = %d\n", moves);


    return 0;
}