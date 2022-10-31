#include <cs50.h>
#include <stdio.h>

// Function prototype
int final_score(int goals, bool snitch_caught);

int main(void)
{
    int goal_num = get_int("Number of times your chasers got the quaffle through a hoop: ");
    bool snitch_caught = get_int("Did your team's seeker catch the snitch? Enter 1 if true, 0 otherwise: ");
    int score = final_score(goal_num, snitch_caught);
    printf("Your team's final score is: %d\n", score);
}

// TODO: function definition
int final_score(int goals, bool snitch_caught)
{
    // Calculate the score - 10pts each goal, add 150pts if snitch caught
    int score = 10 * goals;
    if(snitch_caught)
    {
        score += 150;
    }

    // Return the score
    return score;
}