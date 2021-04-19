import cs50

text = cs50.get_string("Text: ")

word = 1
sentence = 0
letter = 0

# for loop for string
for i in range(0, len(text)):
    if(text[i].isspace()):
        word += 1

    if(text[i] == '?' or text[i] == '.' or text[i] == '!'):
        sentence += 1

    if(text[i].isalpha()):
        letter += 1

# print(f"{word},,{sentence},,{letter}")

avgl = (letter / word) * 100
avgs = (sentence / word) * 100

index = round(0.0588 * avgl - 0.296 * avgs - 15.8)

# for index less than 1
if index < 1:
    print(f"Before Grade 1")

# for index 16+
elif index >= 16:
    print(f"Grade 16+")

# for index other cases
else:
    print(f"Grade {index}")
