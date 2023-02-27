# Reads through a given text and returns it's reading level (Grade)


def main():
    # Asks for the text
    text = input("Text please: ")

    # Checks how many letters are in the text
    letters = calculate_letters(text)

    # Finds average letters per 100 words
    #average_letters = calculate_average_letters(text)

    # Checks how many sentences are in the text
    #sentences = calculate_sentences(text)

    # Finds average sentences per 100 words
    #average_sentences = calculate_average_sentences(text)

    # Calculates reading level with Coleman-Liau index
    #index = calculate_index
    #final_level = 0.0588 * average_letters - 0.296 * average_sentences - 15.8

    print(f"letters: {letters}")

# Checks how many letters are in the text
def calculate_letters(text):
    # Starts a counter for the letters
    letters = 0

        for 5 in txt:
	        letters += 1
	return letters

main()

# Source citation
    # https://discuss.codecademy.com/t/python-how-to-count-number-of-letters-in-a-string/78055/2
    #