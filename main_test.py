import pytest
import re

def regex_test(expected, lines):
    i = 0 ; match = 0
    for token in expected:
        for j in range(i, len(lines)):
            res = re.search(token, lines[j])
            if res is not None:
                i = j + 1
                match += 1
                break
        else:
            assert False, f'Expect: {expected}'
    else:
        assert match == len(expected), f'Expect: {expected}'


@pytest.mark.T1
def test_main_1():
    # Input: 1.0 -1.0 -6.0 → roots 3.00 -2.00
    with open('result1.txt', 'r') as f:
        lines = f.readlines()
    print(lines)
    lines = [line.strip() for line in lines]
    regex_test([r'3\.00.*-2\.00'], lines)


@pytest.mark.T2
def test_main_2():
    # Input: 2 4 -6 → roots 1.00 -3.00
    with open('result2.txt', 'r') as f:
        lines = f.readlines()
    print(lines)
    lines = [line.strip() for line in lines]
    regex_test([r'1\.00.*-3\.00'], lines)


@pytest.mark.T3
def test_main_3():
    # Input: 1 -5 6 → roots 3.00 2.00
    with open('result3.txt', 'r') as f:
        lines = f.readlines()
    print(lines)
    lines = [line.strip() for line in lines]
    regex_test([r'3\.00.*2\.00'], lines)


@pytest.mark.T4
def test_main_4():
    # Input: 1 -3 2 → roots 2.00 1.00
    with open('result4.txt', 'r') as f:
        lines = f.readlines()
    print(lines)
    lines = [line.strip() for line in lines]
    regex_test([r'2\.00.*1\.00'], lines)
