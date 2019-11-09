import os
path = os.environ['BLINKMOJT_PATH']

path = os.path.join(path, 'firmware', 'esp32', 'blinkmojt', 'main', 'index.h')

print(path)



intro = """
#ifndef INDEX_H
#define INDEX_H

char bm_index[] = "{}";

#endif
"""


with open('index.html', 'r') as fp:
    lines = fp.read().splitlines()


index = ""

for line in lines:
    if line != "":  
        index += line.strip()

index = index.replace('"', '\\"')

with open(path, 'w') as fp:
    fp.write(intro.format(index))