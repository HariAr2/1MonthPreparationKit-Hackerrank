import math
import os
import random
import re
import sys

# THE ANSWER CODE FOR THE ABOVE PROBLEM. UwU
#def countingSort(arr):
    # Write your code here
 #   newarr=[0]*100
 #  for i in arr:
 #      newarr[i]+=1
 #  return newarr
#

def countingSort(arr):
    # Write your code here
    newarr=[0]*100
    for i in arr:
        newarr[i]+=1
    return newarr

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    arr = list(map(int, input().rstrip().split()))

    result = countingSort(arr)

    fptr.write(' '.join(map(str, result)))
    fptr.write('\n')

    fptr.close()
