import pytest
from fizzbuzz import fizzbuzz

def test_fizzbuzz_3():
    assert fizzbuzz(3) == 'Fizz\n'

def test_fizzbuzz_5():
    assert fizzbuzz(5) == 'Buzz\n'

def test_fizzbuzz_15():
    assert fizzbuzz(15) == 'FizzBuzz\n'

def test_fizzbuzz_4():
    assert fizzbuzz(4) == 4

def test_fizzbuzz_negative():
    with pytest.raises(TypeError):
        fizzbuzz(-1)
