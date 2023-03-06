import csv
import sys


def main():

    # Check for command-line usage
    if len(sys.argv) != 3:
        print("Usage error")

    # Read database file into a variable
    people = []
    with open(sys.argv[1]) as db_file:
        reader = csv.DictReader(db_file)

        # Save the STRs to a variable
        strs = reader.fieldnames[1:]

        # Put each row of dictionary into the variable people
        for row in reader:
            people.append(row)

    # Read DNA sequence file into a variable
    with open(sys.argv[2]) as dna_file:
        sequence = dna_file.read()

    # Find longest match of each STR in DNA sequence
    matches = {}
    for str in strs:
        matches[str] = longest_match(sequence, str)

    # Check database for matching profiles
    # Starts a counter to check for matches (Let's us exit when someone is missing a match)
    check = 1
    # For every person
    for p in people:

        # For each DNA strands in row
        for m in matches:

            # Compares to database
            if matches[m] == int(p[m]):
                # Adds a check
                check += 1
            # If there is no check, eesets # so they don't carry over to next person
            else:
                check == 1

            # If all checks are matches
            if check == len(matches):
                # Print the person's name
                print(p["name"])
                exit()

    print("No match")

    return


def longest_match(sequence, subsequence):
    """Returns length of longest run of subsequence in sequence."""

    # Initialize variables
    longest_run = 0
    subsequence_length = len(subsequence)
    sequence_length = len(sequence)

    # Check each character in sequence for most consecutive runs of subsequence
    for i in range(sequence_length):

        # Initialize count of consecutive runs
        count = 0

        # Check for a subsequence match in a "substring" (a subset of characters) within sequence
        # If a match, move substring to next potential match in sequence
        # Continue moving substring and checking for matches until out of consecutive matches
        while True:

            # Adjust substring start and end
            start = i + count * subsequence_length
            end = start + subsequence_length

            # If there is a match in the substring
            if sequence[start:end] == subsequence:
                count += 1

            # If there is no match in the substring
            else:
                break

        # Update most consecutive matches found
        longest_run = max(longest_run, count)

    # After checking for runs at each character in seqeuence, return longest run found
    return longest_run


main()