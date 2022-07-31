# experiment to compare multiprocessing performace with 
# single threaded performance


from multiprocessing import Pool
import os
import random
from time import perf_counter as pf
import math 

SIZE = 99999999 

if __name__ == "__main__":
  nums = range(SIZE)

  pool = Pool(8)
  start = pf() 
  pool.map(math.sqrt, nums)
  pool.close()
  stop = pf()

  print(f"multiprocessing: {stop - start}")

  start = pf()
  for i in nums:
    math.sqrt(i)
  stop = pf()
  print(f"non-threaded: {stop-start}")
