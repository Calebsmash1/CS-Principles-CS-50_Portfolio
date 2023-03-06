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
        # !!!!!!!!!!!!!!!!1print(strs)

        # Put each row of dictionary into the variable people
        for row in reader:
            people.append(row)
        #1!!!!!!!!!!!!!!!print(people)

    # Read DNA sequence file into a variable
    with open(sys.argv[2]) as dna_file:
        sequence = dna_file.read()
    # !!!!!!!!!!!!!!!!! print(sequence)

    # Find longest match of each STR in DNA sequence
    matches = {}
    for str in strs:
        matches[str] = longest_match(sequence, str)
    #!!!!!!!!!!print(matches)

    # TODO: Check database for matching profiles
    check = 0
    # For every person
    for p in people:

        # For each DNA strand
        for m in matches:

            # Compares to database
            if int(p[m]) == (matches[m]):
                counter += 1
            else:
                

            if check == len(matches):
                print(p["name"])
                exit()

            #else:
                #print("No Matches")

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