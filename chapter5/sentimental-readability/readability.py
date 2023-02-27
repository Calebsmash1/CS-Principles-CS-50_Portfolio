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

# Checks how many letters are in the text


def calculate_letters(text):
    # Starts a counter for the letters
    letters = 0
    # Defines what are letters
    special_char = ["a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y",
                    "z", "Q", "W", "E", "R", "T", "Y", "U", "I", "O", "P", "L", "K", "J", "H", "G", "F", "D", "S", "A", "Z", "X", "C", "V", "B", "N", "M",]

    # Loops through text looking for letters and returns them
    for char in text:
        if char in special_char:
            letters += 1
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

a
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