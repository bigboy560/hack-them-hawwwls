# 4) Christmas Party Invitations:
# Robin is organizing a Christmas party and needs to track who has RSVP'd to attend. 
# The program receives a list of names of people who have been invited and a separate list of people who have RSVP'd. 
# It should calculate how many people have confirmed attendance, but there's a bug in the way the attendance is being checked.

def count_rsvp(invited, rsvp):
    rsvp_count = 0
    for person in rsvp:
        for invited_person in invited:
            if person == invited_person:
                rsvp_count += 1  
    return rsvp_count
invited = ["Alice", "Bob", "Charlie", "Daisy", "Eve"]
rsvp = ["Charlie", "Bob", "Alice", "Eve", "Eve"]
print(f"Total confirmed RSVP: {count_rsvp(invited, rsvp)}")

