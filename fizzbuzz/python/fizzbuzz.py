# for loop based fizzbuzz
for i in range(1, 101):
  if i % 3 == 0 and i % 5 == 0:
    print('FizzBuzz\n')
  elif i % 3 == 0:
    print('Fizz\n')
  elif i % 5 == 0:
    print('Buzz\n')
  else:
    print(i, '\n')

# function based fizzbuzz for pytest
def fizzbuzz(num):
  if num > 100 or num <1:
    raise TypeError
  if num % 3 == 0 and num % 5 == 0:
    return 'FizzBuzz\n'
  elif num % 3 == 0:
    return 'Fizz\n'
  elif num % 5 == 0:
    return 'Buzz\n'
  else:
    return num
