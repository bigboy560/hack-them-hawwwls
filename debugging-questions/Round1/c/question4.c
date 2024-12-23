// 4) Christmas Party Invitations:
// Robin is organizing a Christmas party and needs to track who has RSVP'd to attend. 
// The program receives a list of names of people who have been invited and a separate list of people who have RSVP'd. 
// It should calculate how many people have confirmed attendance, but there's a bug in the way the attendance is being checked.

#include <stdio.h>
#include <string.h>
int count_rsvp(char invited[][50], char rsvp[][50], int total_invited, int total_rsvp) {
    int rsvp_count = 0;
    for (int i = 0; i < total_rsvp; i++) {
        for (int j = 0; j < total_invited; j++) {
            if (strcmp(rsvp[i], invited[j]) == 0) {
                rsvp_count++; 
            }
        }
    }
    return rsvp_count;
}
int main() {
    char invited[][50] = {"Alice", "Bob", "Charlie", "Daisy", "Eve"};
    char rsvp[][50] = {"Charlie", "Bob", "Alice", "Eve", "Eve"};
    int total_invited = 5;
    int total_rsvp = 5;
    printf("Total confirmed RSVP: %d\n", count_rsvp(invited, rsvp, total_invited, total_rsvp));
    return 0;
}
