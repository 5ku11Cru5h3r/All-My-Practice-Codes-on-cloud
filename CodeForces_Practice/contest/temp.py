def minimize_max_mex(A, B):
    from collections import defaultdict
    
    n = len(A)
    pos = defaultdict(list)
    
    for i in range(n):
        pos[A[i]].append((i, 0))  # 0 means in A
        pos[B[i]].append((i, 1))  # 1 means in B
    
    mex = 0
    while True:
        if mex not in pos:  # number not in either array
            return mex
        
        # check if this number can appear in both arrays
        inA, inB = False, False
        for idx, where in pos[mex]:
            if where == 0:
                inA = True
            else:
                inB = True
            if inA and inB:
                break
        
        # If number never in A and never can be swapped to A => stop
        if not (inA and inB):
            return mex
        
        mex += 1

T=int(input())
for _ in range(T):
    n = int(input())
    A = list(map(int, input().split()))
    B = list(map(int, input().split()))
    print(minimize_max_mex(A, B))