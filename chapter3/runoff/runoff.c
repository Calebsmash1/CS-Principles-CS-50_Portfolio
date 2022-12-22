#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

// Max voters and candidates
#define MAX_VOTERS 100
#define MAX_CANDIDATES 9

// preferences[i][j] is jth preference for voter i
int preferences[MAX_VOTERS][MAX_CANDIDATES];

// Candidates have name, vote count, eliminated status
typedef struct
{
    string name;
    int votes;
    bool eliminated;
}
candidate;

// Array of candidates
candidate candidates[MAX_CANDIDATES];

// Numbers of voters and candidates
int voter_count;
int candidate_count;

// Function prototypes
bool vote(int voter, int rank, string name);
void tabulate(void);
bool print_winner(void);
int find_min(void);
bool is_tie(int min);
void eliminate(int min);

int main(int argc, string argv[])
{
    // Check for invalid usage
    if (argc < 2)
    {
        printf("Usage: runoff [candidate ...]\n");
        return 1;
    }

    // Populate array of candidates
    candidate_count = argc - 1;
    if (candidate_count > MAX_CANDIDATES)
    {
        printf("Maximum number of candidates is %i\n", MAX_CANDIDATES);
        return 2;
    }
    for (int i = 0; i < candidate_count; i++)
    {
        candidates[i].name = argv[i + 1];
        candidates[i].votes = 0;
        candidates[i].eliminated = false;
    }

    voter_count = get_int("Number of voters: ");
    if (voter_count > MAX_VOTERS)
    {
        printf("Maximum number of voters is %i\n", MAX_VOTERS);
        return 3;
    }

    // Keep querying for votes
    for (int i = 0; i < voter_count; i++)
    {

        // Query for each rank
        for (int j = 0; j < candidate_count; j++)
        {
            string name = get_string("Rank %i: ", j + 1);

            // Record vote, unless it's invalid
            if (!vote(i, j, name))
            {
                printf("Invalid vote.\n");
                return 4;
            }
        }

        printf("\n");
    }

    // Print array to the screen
    printf("Printed Preferences 2D Array:\n");
    for (int i = 0; i < voter_count; i++)
    {
        for (int j = 0; j < candidate_count; j++)
        {
            printf("%i\t", preferences[i][j]);
        }
        printf("\n");
    }

    // Keep holding runoffs until winner exists
    while (true)
    {
        // Calculate votes given remaining candidates
        tabulate();

        // Check if election has been won
        bool won = print_winner();
        if (won)
        {
            break;
        }

        // Eliminate last-place candidates
        int min = find_min();
        bool tie = is_tie(min);

        // If tie, everyone wins
        if (tie)
        {
            for (int i = 0; i < candidate_count; i++)
            {
                if (!candidates[i].eliminated)
                {
                    printf("%s\n", candidates[i].name);
                }
            }
            break;
        }

        // Eliminate anyone with minimum number of votes
        eliminate(min);

        // Reset vote counts back to zero
        for (int i = 0; i < candidate_count; i++)
        {
            candidates[i].votes = 0;
        }
    }
    return 0;
}

// Record preference if vote is valid
bool vote(int voter, int rank, string name)
{
    // TODO
    // Look for a candidate called name (linear search for name in candidates[])
    for (int i = 0; i < candidate_count; i++)
    {
        // If candidate found
        if (strcasecmp(candidates[i].name, name)  == 0)
        {
            // Update preferences[][]
            preferences[voter][rank]= i;
            // Return true
            return true;
        }
    }
    // Otherwsie, candidate not found
    return false;
}

// Tabulate votes for non-eliminated candidates
void tabulate(void)
{
    // TODO
    // For each row/voter in preferences[][]
    for (int i = 0; i < voter_count; i++)
    {
        // For each col/candidate in preferences[][]
        for (int p = 0; p < candidate_count; p++)
        {
            // If candidate vote in preferences[][] is not elimated in candidates[]
            if (candidates[preferences[i][p]].eliminated  == false)
            {
                // Update vote count in candidates[]
                candidates[preferences[i][p]].votes++;
                // break out of the most recent for loop
                break;
            }
        }
    }
    return;
}

// Print the winner of the election, if there is one
bool print_winner(void)
{
    // TODO
    // Checks if there is a winner
    // For each candidate
     for(int i = 0; i < candidate_count; i++)
    {
        // Checks to see if they have majority
        if (candidates[i].votes > MAX_VOTERS / 2)
        {
            // Print out the candidate(s) with the largest number of votes
            printf("%s\n", candidates[i].name);

            // Returns true
            return true;
        }
    }
    // Returns if not
    return false;
}

// Return the minimum number of votes any remaining candidate has
int find_min(void)
{
    // TODO
    // For each candidate
    for(int i = 0; i < candidate_count; i++)
    {
        // Checks which candidate has least amount of votes (which was eliminated)
        if (candidates[i].votes < MAX_VOTERS /3)
        {
            // Returns the minimum number of votes any remaining candidate has
            return candidates[i].votes;
        }
    }

    // Returns 0
    return 0;
}

// Return true if the election is tied between all candidates, false otherwise
bool is_tie(int min)
{
    // TODO
    for(int i = 0; i < candidate_count; i++)
    {
        // Checks if candidates have equal number of votes
        if (candidates[i].votes == candidates[i+1].votes)
        {
            // If so, returns true
            return true;
        }
    }

    return false;
}

// Eliminate the candidate (or candidates) in last place
void eliminate(int min)
{
    // TODO
    // For each candidate
    for(int i = 0; i < candidate_count; i++)
    {
        // Checks which candidate has least amount of votes (which one will be eliminated)
        if (candidates[i].votes < MAX_VOTERS /3)
        {
            // Eliminates them
            candidates[i].eliminated = true;
        }
    return;
    
    }
}