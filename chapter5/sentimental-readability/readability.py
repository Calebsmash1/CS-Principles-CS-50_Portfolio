# Reads through a given text and returns it's reading level (Grade)


def main():
    # Asks for the text
    text = input("Text please: ")

    # Checks how many letters are in the text
    letters = calculate_letters(text)

    # Finds average letters per 100 words
    #average_letters = calculate_average_letters(text)

    # Checks how many sentences are in the text
    sentences = calculate_sentences(text)

    # Finds average sentences per 100 words
    #average_sentences = calculate_average_sentences(text)

    # Calculates reading level with Coleman-Liau index
    #index = calculate_index
    #final_level = 0.0588 * average_letters - 0.296 * average_sentences - 15.8

    print(f"letters: {letters}")
    print(f"sentences: {sentences}")

# Checks how many letters are in the text
def calculate_letters(text):
    # Starts a counter for the letters
    letters = 0
    special_char = ["a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"]

    for char in text:
        if char in special_char:
            letters += 1
    return letters

# Checks how many sentences are in the text
def calculate_sentences(text):
    # Starts a counter for the sentences (Starts at 1)
    sentences = 1
    special_char = ["."]

    for char in text:
        if char in special_char:
            sentences += 1
    return sentences

#def calculate_words(text):
    # Starts a counter for the words (Starts at 1)
    #words = 1
    #special_char = [" "]

    #for char in text:
        #if char in special_char:
           #words += 1
    #return words


main()

# Source citation
    # https://discuss.codecademy.com/t/python-how-to-count-number-of-letters-in-a-string/78055/2
    #