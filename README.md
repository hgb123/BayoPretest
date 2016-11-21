# Bayo Pretest

###Status:
Failed.

###Problem: 
Sort 1 million signed 32-bit integers using 3MB of memory.

###My solution (for the ideal case that input data is exactly 4MB):
    
    -   Split the input data (4MB) into two sorted halves (2MB).
    -   One half is hold by the program, another is save to the temporary isolated file so that it alway make sure that the memory the program take to handle the problem are just 2MB and a bit more (for other temporary variable).
    -   We will use the sort function from algorithm.h lib to reach the fastest time. 
    -   Finally, perform merging these two half into a completed output file. Jobs done!
    
###How to use (for Unix-like system):

    - Download inp.txt and solution.cpp and put those to one folder you want
    - Open terminal.
    - g++ -o2 -o solution solution.cpp
    - Check the out.txt

###P.S. (in this self-implemented test case):
Due to some technical reason (not fully-optimized implementation), my own input data is larger than 10MB. But this solution works well, reduces the memory taken to execute the problem to half of the input data file. Thanks for concerning!

