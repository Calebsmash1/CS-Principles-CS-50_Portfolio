# Reads through a given text and returns it's reading level (Grade)


def main():
    # Asks for the text
    text = input("Text please: ")

    # Checks how many letters are in the text
    letters = calculate_letters()

    # Finds average letters per 100 words
    average_letters = calculate_average_letters()

    # Checks how many sentences are in the text
    sentences = calculate_sentences()

    # Finds average sentences per 100 words
    average_sentences = calculate_average_sentences()

    # Calculates reading level with Coleman-Liau index
    index = calculate_index
    final_level = 0.0588 * average_letters - 0.296 * average_sentences - 15.8


main()