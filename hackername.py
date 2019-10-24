#!/usr/bin/env python3

import sys
import random

subs = {}

subs['A'] = random.choice(['4', '@'])
subs['G'] = '9'
subs['E'] = '3'
subs['I'] = '1'
subs['K'] = '|<'
subs['O'] = '0'
subs['S'] = random.choice(['5', '$'])
subs['T'] = '7'

def change(s):
    if s in subs:
        return subs[s]
    return s

if len(sys.argv) != 2:
    print("Usage:", sys.argv[0], "\"your name\"")
    exit(1)

text = sys.argv[1].upper()
text = map(change, text)
text = ''.join(text)

print(text)
