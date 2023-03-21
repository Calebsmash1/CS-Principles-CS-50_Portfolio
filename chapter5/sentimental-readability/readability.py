# Reads through a given text and returns it's reading level (Grade)


def main():
    # Asks for the text
    text = input("Text please: ")

    # Checks how many letters are in the text
    letters = calculate_letters(text)

    # Checks how many words are in the text
    words = calculate_words(text)

    # Checks how many sentences are in the text
    sentences = calculate_sentences(text)

    # Calculates reading level with Coleman-Liau index
    final_level = (0.0588 * (100.0 * letters / words) - 0.296 * (100.0 * sentences / words) - 15.8)
    final_level = round(final_level)

    # Prints the reading level
    if final_level > 15:
        print("Grade 16+")

    elif final_level < 1:
        print("Before Grade 1")

    else:
        print(f"Grade {final_level}")
        print(f"Letters {letters}")
        print(f"Sentences {sentences}")
        print(f"Words {words}")

# Checks how many letters are in the text


def calculate_letters(text):
    # Starts a counter for the letters
    letters = 0
    for char in text:       # i holds each character in String s for every iteration of loop
        if (char.isalpha()):
            letters += 1   # Increment Count by 1
    return letters


# Checks how many sentences are in the text


def calculate_sentences(text):
    # Starts a counter for the sentences
    sentences = 0
    # Defines what constitutes as the start of a new sentence
    special_char = [".", "?", "!"]

    # Loops through text looking for sentences and returns them
    for char in text:
        if char in special_char:
            sentences += 1
    return sentences


def calculate_words(text):

    # Starts a counter for the words (Starts at 1)
    words = 1
    # Defines when to count as a new word
    special_char = " "

    # Loops through text looking for words and returns them
    for char in text:
        if char in special_char:
            words += 1
    return words


main()