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
    final_level = round(0.0588 * (100 * letters / words) - 0.296 * (100 * sentences / words) - 15.8)

    print(f"Grade {final_level}")

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
    # Starts a counter for the sentences
    sentences = 0
    special_char = [".", "?", "!"]

    for char in text:
        if char in special_char:
            sentences += 1
    return sentences

def calculate_words(text):
    # Starts a counter for the words (Starts at 1)
    words = 1
    special_char = [" "]

    for char in text:
        if char in special_char:
           words += 1
    return words


main()