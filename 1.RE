import re
text = "Hello, my name is raji and my email is raji@gmail.com"
pattern = r'\b[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\.[A-Z|a-z]{2,}\b'
regex = re.compile(pattern)
matches = regex.findall(text)
for match in matches:
    print("Match found: ", match)
