def permutations(string):
    if len(string) == 1:
        return string

    recursive_perms = []
    for c in string:
        for perm in permutations(string.replace(c,'',1)):
            recursive_perms.append(c+perm)

    return set(recursive_perms)
s=input()
l=len(s)
list1=list(permutations(s))
i=0
a=''
list2=[]
while i<len(list1):
    a=list1[i]
    f=0
    r=l-1
    while f<l:
        if a[f]!=a[r]:
            break
        f=f+1
        r-=1
    i=i+1
    if f==l:
        list2.append(a)
list2.sort()
for i in range(0,len(list2)):
    print(list2[i],"\n")
