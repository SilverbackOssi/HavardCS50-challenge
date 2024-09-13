# for 4-Digit passcode
from string import digits
from itertools import product

for passcode in product(digits,repeat=4):
   print(*passcode )


# for 4-Character passcode
from string import ascii_letters
from itertools import product

for passcode in product(ascii_letters,repeat=4):
   print(*passcode )


# for 4-Digit/Character passcode
from string import digits, punctuation, ascii_letters
from itertools import product

for passcode in product(digits + punctuation + ascii_letters,repeat=4):
   print(*passcode )
