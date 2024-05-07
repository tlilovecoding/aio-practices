input_file = open("streetin.txt", "r")
output_file = open("streetout.txt", "w")

chunks = None

parks = None

input_line = input_file.readline().strip()
chunks, parks = map(int, input_line.split())

def smallest():
    return chunks // (parks + 1)

output_file.write(str(smallest()))
