input_string = "ManVIUpAdHyAy"
modified_string = ""

for char in input_string:
    if char.islower():
        modified_string += char
    else:
        modified_string += char.lower()

print(modified_string)