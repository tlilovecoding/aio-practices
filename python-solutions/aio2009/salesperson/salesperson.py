with open("salesin.txt", "r") as input_file:
    one = int(input_file.readline().strip())
    two = int(input_file.readline().strip())
    three = int(input_file.readline().strip())
sum = max((one+two), max(one+three, three + two))
with open("salesout.txt", "w") as output_file:
    output_file.write(str(sum))