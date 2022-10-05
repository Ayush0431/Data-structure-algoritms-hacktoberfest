def linear_search(ar,key):
    i = 0;
    while i<len(ar):
        if ar[i]==key:
            return i
        i+=1
    return -1;


ar = [1,2,3,4,5,6,7]
print(linear_search(ar,3))
print(linear_search(ar,5))
