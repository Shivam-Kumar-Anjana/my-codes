import cs50
import sys
import csv


def get_max_no(s, sub):
    # to get the max nuber for continues str
    ans = [0] * len(s)

    for i in range(len(s) - len(sub), -1, -1):
        if s[i: i + len(sub)] == sub:
            if i + len(sub) > len(s) - 1:
                ans[i] = 1
            else:
                ans[i] += 1 + ans[i + len(sub)]

    return max(ans)
    

def print_matched(reader, actual):
    # to find the person with matched str
    for line in reader:
        person = line[0]
        values = [int(val) for val in line[1:]]
        if values == actual:
            print(person)
            return

    print("no match")
    

def main():
    
    # check if argv are 3 or not
    if len(sys.argv) != 3:
        sys.exit("Usage: python dna.py data.csv sequence.txt")

    csv_data = sys.argv[1]

    with open(csv_data) as csv_file:
        reader = csv.reader(csv_file)
        # for row in reader:
        # print(row)
        all_seq = next(reader)[1:]
        txt_data = sys.argv[2]
        with open(txt_data) as txt_file:
            s = txt_file.read()
            # print(s)
            actual = [get_max_no(s, seq) for seq in all_seq]
            # print(actual)

            print_matched(reader, actual)


if __name__ == "__main__":
    main()
